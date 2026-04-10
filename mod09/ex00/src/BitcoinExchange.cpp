#include "../include/BitcoinExchange.hpp"

static const unsigned int JAN = 1, FEB = 2, MAR = 3, APR = 4, MAY = 5, JUN = 6, JUL = 7, AUG = 8, SEP = 9, OCT = 10, NOV = 11, DEC = 12;

static bool yearIsLeap(const int year) {
    return year % 4 && (year % 100 != 0 || year % 400);
}

static bool validateDateFormat(const std::string &date) {
    //YYYY-MM-DD
    if (date.size() != 10 || date [4] != '-' || date[7] != '-') {
        return false;
    }

    for (unsigned int i = 0; i < 10; ++i) {
        if (i == 4 || i == 7) {
            continue;
        }
        if (!std::isdigit(date[i])) {
            return false;
        }
    }

    return true;
}

static bool validateDateContents(const std::string &date) {
    int year, month, day;

    std::istringstream(date.substr(0, 4)) >> year;
    std::istringstream(date.substr(5, 2)) >> month;
    std::istringstream(date.substr(8, 2)) >> day;

    if (month < 1 || month > 12) {
        return false;
    }

    switch (month) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            return day <= 31;
        case APR: case JUN: case SEP: case NOV:
            return day <= 30;
        case FEB:
            if (yearIsLeap(year)) {
            return day <= 29;
            }
            return day <= 28;
        default:
            return false;
    }
}

static bool dateIsValid(const std::string &date) {
    return validateDateFormat(date) && validateDateContents(date);
}

static bool csvLineIsValid(const std::string& line) {
    int comma_position = line.find(',');

    if (comma_position <= 0) {
        return false;
    }

    const std::string date = line.substr(0, comma_position);
    if (dateIsValid(date) == false) {
        return false;
    }

    double amount;
    std::istringstream(line.substr(comma_position + 1)) >> amount;;

    return true;
}

bool inputLineIsEmpty(const std::string& line) {
    for (size_t i = 0; i < line.length(); i ++) {
        if (std::isspace(line[i]) == false) {
            return false;
        }
    }
    return true;
}


bool inputLineIsValid(const std::string& line) {
    int spacer_position = line.find(" | ");

    if (spacer_position <= 0) {
        return false;
    }

    const std::string date = line.substr(0, spacer_position);
    if (dateIsValid(date) == false) {
        return false;
    }

    char *after_number;
    double amount = std::strtod(line.substr(spacer_position + 3).c_str(), &after_number);

    while (*after_number == ' ') {
        after_number++;
    }

    if (*after_number != '\0') {
        return false;
    }

    if (amount < 0 || amount > 1000) {
        return false;
    }

    return true;
}

BitcoinExchange::BitcoinExchange() {
    _history_file.open(DATABASE_FILE, std::ios::in); //std::ios::in???
    if (_history_file.is_open() == false) {
        throw MissingDatabaseException();
    }

    _parseHistory();
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& source) {(void)source;}

void BitcoinExchange::_parseHistory() {
    std::string current_line;

    while (std::getline(_history_file, current_line)) {
        
        if (csvLineIsValid(current_line) == false) {
            continue;
        }

        size_t comma_position = current_line.find(',');
        std::string current_key = current_line.substr(0, comma_position);
        double current_value = strtod(current_line.substr(comma_position + 1).c_str(), NULL);

        _history[current_key] = current_value;
    
    }
}

double BitcoinExchange::getValue(double amount, const std::string &date) {
    std::map<std::string, double>::iterator it = _history.begin();

    if (date < it->first) {
        return 0;
    }

    while (date >= it->first) {
        ++it;
    }

    --it;

    return amount = it->second;
}
