/*
 * Name: luna
 * File: ScalarConverter.hpp
 * Created on: 9/10/25 2:16
 */

#ifndef EX00_SCALARCONVERTER_HPP
#define EX00_SCALARCONVERTER_HPP

#include <string>
#include <Format.hpp>

enum scalarType {
	EDGE,
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INV
};

class ScalarConverter {
    public:
        static void convert(const std::string& str);
    private:
        static enum scalarType _identify(const std::string& str);
        static Format* _convertChar(const std::string& str);
        static Format* _convertInt(const std::string& str);
        static Format* _convertFloat(const std::string& str);
        static Format* _convertDouble(const std::string& str);
};

#endif //EX00_SCALARCONVERTER_HPP
