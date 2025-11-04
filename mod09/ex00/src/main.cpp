/*
 * Name: luna
 * File: main.cpp
 * Created on: 29/10/25 12:14
 */

#include <iostream>

#include <BitcoinExchange.hpp>
#include <cstdlib>

int main(int argc, char** argv) {
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
        std::string date = current_line.substr(0, current_line.find(" | "));
        char* end;
        double amount = strtod(current_line.substr(current_line.find(" | ") + 3).c_str(), &end);

        std::cout << date << " => " << amount << " = " << prize_lookup.getValue(amount, date) << std::endl;
    }

}
