/*
 * Name: luna
 * File: BitcoinExchange.cpp
 * Created on: 30/10/25 14:45
 */

#include <BitcoinExchange.hpp>
#include <algorithm>
#include <iostream>
#include <fstream>

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

        size_t comma_position = current_line.find(',');
        current_key = current_line.substr(0, comma_position);
        current_value = strtod(current_line.substr(comma_position + 1).c_str(), &end);

        this->_history[current_key] = current_value;
    }
}

double BitcoinExchange::getValue(double prize, const std::string &date) {
    std::map<std::string, double>::iterator it = this->_history.begin();

    while (date >= it->first) {
        //std::cout << "searching... " << it->first << " " << it->second << std::endl;
        ++it;
    }
    --it;

    return prize * it->second;
}

