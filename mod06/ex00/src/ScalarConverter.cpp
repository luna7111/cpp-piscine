/*
 * Name: luna
 * File: ScalarConverter.cpp
 * Created on: 9/10/25 2:23
 */

#include <cstdio>
#include <sstream>
#include <ScalarConverter.hpp>
#include <iostream>
#include <Format.hpp>


enum scalarType ScalarConverter::_identify(const std::string &str) {
    if (str.length() == 1) {
        if (std::isdigit(str[0])) {
            return INT;
        }
        return CHAR;
    }

    if (str.find('f') != std::string::npos) {
        return FLOAT;
    }

    if (str.find('.') != std::string::npos) {
        return DOUBLE;
    }

    return INT;
}

Format* ScalarConverter::_convertChar(const std::string &str) {
    Format* format = new Format;

    format->addCharNotation(str[0]);
    format->addIntNotation(str[0]);
    format->addFloatNotation(str[0]);
    format->addDoubleNotation(str[0]);
    return format;
}

Format *ScalarConverter::_convertInt(const std::string &str) {
    Format* format = new Format;
    std::stringstream ss;
    int number;

    ss << str;
    ss >> number;
    if (ss.fail()) {
        format->setInvalidFormat();
        return format;
    }

    (isascii(number))
    ? format->addCharNotation(number)
    : format->setNoChar();
    format->addIntNotation(number);
    format->addFloatNotation(static_cast<float>(number));
    format->addDoubleNotation(static_cast<double>(number));
    return format;
}

Format *ScalarConverter::_convertFloat(const std::string &str) {
    Format* format = new Format;
    std::stringstream ss;
    float number;

    ss << str;
    ss >> number;

    if (ss.fail()) {
        format->setInvalidFormat();
        return format;
    }

    if (isascii(static_cast<int>(number))) {
        format->addCharNotation(static_cast<char>(number));
    }
    else {
        format->setNoChar();
    }

    format->addIntNotation(static_cast<int>(number));
    format->addFloatNotation(number);
    format->addDoubleNotation(number);
    return format;
}

Format *ScalarConverter::_convertDouble(const std::string &str) {
    Format* format = new Format;
    std::stringstream ss;
    double number;

    ss << str;
    ss >> number;
    if (ss.fail()) {
        format->setInvalidFormat();
        return format;
    }

    if (isascii(static_cast<int>(number))) {
        format->addCharNotation(static_cast<char>(number));
    }
    else {
        format->setNoChar();
    }
    format->addIntNotation(static_cast<int>(number));
    format->addFloatNotation(static_cast<float>(number));
    format->addDoubleNotation(number);
    return format;
}

void ScalarConverter::convert(const std::string &str) {

    Format* format;

    switch (_identify(str)) {
        case CHAR:
            format = _convertChar(str);
            break;
        case INT:
            format = _convertInt(str);
            break;
        case FLOAT:
            format = _convertFloat(str);
            break;
        case DOUBLE:
            format = _convertDouble(str);
            break;
        default:
            std::cerr << "Invalid format" << std::cout;
            return;
    }
    format->print();
    delete format;
}

//TODO stringstreams must be empty after taking number out, mut must handle float f character