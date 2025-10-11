/*
 * Name: luna
 * File: Format.cpp
 * Created on: 9/10/25 12:39
 */

#include <Format.hpp>
#include <iomanip>
#include <iostream>

Format::Format():
_formatIsValid(true),
_charIsValid(true)
{}

Format::~Format() {}

Format::Format(const Format &src):
_formatIsValid(src.getFormatValidity()),
_charIsValid(src.getCharValidity()),
_charNotation(src.getCharNotation()),
_intNotation(src.getIntNotation()),
_floatNotation(src.getFloatNotation()),
_doubleNotation(src.getDoubleNotation())
{}

Format &Format::operator=(const Format &rhs) {
    this->_charNotation = rhs.getCharNotation();
    return *this;
}

bool Format::getFormatValidity() const {
    return this->_formatIsValid;
}

bool Format::getCharValidity() const {
    return this->_charIsValid;
}

char Format::getCharNotation() const {
    return this->_charNotation;
}

int Format::getIntNotation() const {
    return this->_intNotation;
}

float Format::getFloatNotation() const {
    return this->_floatNotation;
}

double Format::getDoubleNotation() const {
    return this->_doubleNotation;
}

void Format::setNoChar() {
    this->_charIsValid = false;
}

void Format::setInvalidFormat() {
    this->_formatIsValid = false;
}


void Format::addCharNotation(char c) {
    this->_charNotation = c;
}

void Format::addIntNotation(int n) {
    this->_intNotation = n;
}

void Format::addFloatNotation(float n) {
    this->_floatNotation = n;
}

void Format::addDoubleNotation(double n) {
    this->_doubleNotation = n;
}

void Format::print() {

    if (_formatIsValid == false) {
        std::cout << "Invalid format." << std::endl;
        return;
    }

    if (this->_charIsValid) {
        if (isprint(this->_charNotation)) {
            std::cout << "char: '" << this->_charNotation << "'" << std::endl;
        }
        else {
            std::cout << "char: Non displayable" << std::endl;
        }
    }
    else {
        std::cout << "char: Impossible" << std::endl;
    }

    std::cout << "int: " << this->_intNotation << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(1) << this->_floatNotation << "f" << std::endl;

    std::cout << "double: " << std::fixed << std::setprecision(1) << this->_doubleNotation << std::endl;
}
