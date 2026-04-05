#ifndef  BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <ftream>
#include <algorithm>
#include <map>

class BitcoinExchange {
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange& operator = (const BitcoinExchange& rhs);
        ~BitcoinExchange();

        double getValue(double prize, const std::string& date);

    private:
        std::ifstream _history_file;
        std::map<std::string, double> _history;

        void _parseHistory();
}

#endif
