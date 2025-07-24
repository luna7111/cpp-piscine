/*
 * Name: Luna del Valle
 * File: Fixed.cpp
 * Created on: Wednesday Jul 23, 2025 14:12:22 CEST
 */

#include <Fixed.hpp>
#include <iostream>
#include <cmath>

/* CONSTRUCTORS */

/* Default constructor */
Fixed::Fixed() {
    std::cout<<"Default constructor called"<<std::endl;

    this->int_value = 0;
}

/* Copy constructor  */
Fixed::Fixed(const Fixed& source) {
    std::cout<<"Copy constructor called"<<std::endl;

    *this = source;
}

/* Int constructor */
Fixed::Fixed(const int value) {
    std::cout<<"Int constructor called"<<std::endl;

    this->int_value = value << this->fractional_bits_number;
}

/* Float constructor */
Fixed::Fixed(const float value) {
    std::cout<<"Float constructor called"<<std::endl;

    this->int_value = roundf(value * (1 << this->fractional_bits_number));
}


/* Default destructor */
Fixed::~Fixed() {
    std::cout<<"Destructor called"<<std::endl;
}

/* OPERATOR OVERLOADING */

/* Copy assignment operator */
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    this->int_value = rhs.getRawBits();

    return (*this);
}

/* Insertion operator overloading */
std::ostream& operator<<(std::ostream& out, const Fixed &src) {
    out << src.toFloat();

    return out;
}


/* MEMBER FUNCTIONS */

int Fixed::toInt(void) const {
    return (this->int_value >> this->fractional_bits_number);
}

float Fixed::toFloat(void) const {
    return ((float)this->int_value / (float)(1 << this->fractional_bits_number));
}


int Fixed::getRawBits(void) const {
    std::cout<<"getRawBits member function called"<<std::endl;

	return this->int_value;
}

void Fixed::setRawBits(int const raw) {
    std::cout<<"setRawBits member function called"<<std::endl;

	this->int_value = raw;
}
