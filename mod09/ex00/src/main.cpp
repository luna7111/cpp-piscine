#include "../include/BitcoinExchange.hpp"

int main (int argc, char** argv) {

    if (argc != 2) {
        std::cerr << "Usage: ./btc <file>" << std::endl;
        return 1;
    }

    std::ifstream input_file;

    input_file.open(argv[1], std::ios::in);
    if (input_file.is_open() == false) {
        std::cerr << "Couldn't open file." << std::endl;
        return 1;
    }

    BitcoinExchange prize_lookup;

    std::string current_line;

    while (std::getline(input_file, current_line)) {
        if (inputLineIsEmpty(current_line) || current_line == "date | value") {
            continue;
        }
        if (inputLineIsValid(current_line) == false) {
            std::cout << "Invalid line -> " << current_line << std::endl;
            continue;
        }
        std::string date = current_line.substr(0, current_line.find(" | "));
        double amount = strtod(current_line.substr(current_line.find(" | ") + 3).c_str(), NULL);

        double value = prize_lookup.getValue(amount, date);
        std::cout << date << " => " << amount << " = " << value << std::endl;
    }

}
