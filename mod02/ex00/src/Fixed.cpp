/*
 * Name: Luna del Valle
 * File: Fixed.cpp
 * Created on: Wednesday Jul 23, 2025 14:12:22 CEST
 */

#include <Fixed.hpp>
#include <iostream>

//Default constructor
Fixed::Fixed() {
    std::cout<<"Default constructor called"<<std::endl;

    this->int_value = 0;
}

//Copy constructor
Fixed::Fixed(const Fixed& source) {
    std::cout<<"Copy constructor called"<<std::endl;

    *this = source;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    this->int_value = rhs.getRawBits();

    return (*this);
}

//Default destructor
Fixed::~Fixed() {
    std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout<<"getRawBits member function called"<<std::endl;

	return this->int_value;
}

void Fixed::setRawBits(int const raw) {
    std::cout<<"setRawBits member function called"<<std::endl;

	this->int_value = raw;
}
