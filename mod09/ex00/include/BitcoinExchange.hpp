#ifndef  BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <map>

const char DATABASE_FILE[] = "./data.csv";

class BitcoinExchange {
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange& operator = (const BitcoinExchange& rhs);
        ~BitcoinExchange();

        double getValue(double amount, const std::string& date);

        class MissingDatabaseException: public std::exception {
        public: const char* what() const throw() { return "Database missing or unaccesible."; }
        };

    private:
        std::ifstream _history_file;
        std::map<std::string, double> _history;

        void _parseHistory();
};

bool inputLineIsEmpty(const std::string& current_line);
bool inputLineIsValid(const std::string& current_line);

#endif
