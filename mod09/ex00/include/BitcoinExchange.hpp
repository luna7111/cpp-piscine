/*
 * Name: luna
 * File: BitcoinExchange.hpp
 * Created on: 30/10/25 14:45
 */

#ifndef EX00_BITCOINEXCHANGE_HPP
#define EX00_BITCOINEXCHANGE_HPP

#include <fstream>
#include <map>
#include <string>

class BitcoinExchange {
    public:
        BitcoinExchange();
        virtual ~BitcoinExchange();

        double getValue(double prize, const std::string& date);

    private:
        BitcoinExchange(const BitcoinExchange& source);
        BitcoinExchange& operator = (const BitcoinExchange& rhs);

        std::ifstream _history_file;
        std::map<std::string, double> _history;

        void _parseHistory();

};

bool inputLineIsEmpty(const std::string& line);
bool inputLineIsValid(const std::string& line);

#endif //EX00_BITCOINEXCHANGE_HPP