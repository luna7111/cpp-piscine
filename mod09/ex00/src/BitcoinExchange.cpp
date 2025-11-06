/*
 * Name: luna
 * File: BitcoinExchange.cpp
 * Created on: 30/10/25 14:45
 */

#include <BitcoinExchange.hpp>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <fstream>


// BitcoinExchange class unrelated

static const unsigned int JAN = 1, FEB = 2, MAR = 3, APR = 4, MAY = 5, JUN = 6, JUL = 7, AUG = 8, SEP = 9, OCT = 10, NOV = 11, DEC = 12;

bool yearIsLeap(const int year) {
    return year % 4 && (year % 100 != 0 || year % 400);
}

bool dateIsValid(const std::string &date) {
    //YYYY-MM-DD
    if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
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

bool csvLineIsValid(const std::string& line) {
    int comma_position = line.find(',');
    if (comma_position < 0) {
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

bool inputLineIsValid(const std::string& line) {
    int spacer_position = line.find(" | ");
    if (spacer_position < 0) {
        return false;
    }

    const std::string date = line.substr(0, spacer_position);
    if (dateIsValid(date) == false) {
        return false;
    }

    double amount;
    std::istringstream(line.substr(spacer_position + 3)) >> amount;;

    if (amount < 0 || amount > 1000) {
        return false;
    }

    return true;
}

// BitcoinExchange class related

BitcoinExchange::BitcoinExchange(const BitcoinExchange &source) {
    *this = source;
}

BitcoinExchange::~BitcoinExchange() {}


BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
    (void)rhs;
    return *this;
}

BitcoinExchange::BitcoinExchange() {

    _history_file.open("data/data.csv", std::ios::in); //TODO: make this less messy and figure the "mode" thing out
    if (_history_file.is_open() == false) {
        throw std::exception(); //TODO: make custom exception
    }

    this->_parseHistory();
}


void BitcoinExchange::_parseHistory() {

    std::string current_line;

    std::string current_key;
    double current_value;

    while (std::getline(this->_history_file, current_line)) {
        char* end;

        if (csvLineIsValid(current_line) == false) {
            continue;
        }

        size_t comma_position = current_line.find(',');
        current_key = current_line.substr(0, comma_position);
        current_value = strtod(current_line.substr(comma_position + 1).c_str(), &end);

        this->_history[current_key] = current_value;
    }
}

double BitcoinExchange::getValue(double prize, const std::string &date) {
    std::map<std::string, double>::iterator it = this->_history.begin();

    while (date >= it->first) {
        ++it;
    }
    --it;

    return prize * it->second;
}

