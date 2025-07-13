/*
 * Name: Luna del Valle
 * File: Fixed.cpp
 * Created on: Sunday Jul 13, 2025 14:47:20 CEST
 */

#include <Fixed.hpp>

Fixed::Fixed() {
	this->int_value = 0;
}

Fixed::Fixed(const Fixed& copy) {
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
	this->int_value = rhs.int_value;
	return (*this);
}

Fixed::~Fixed() {
}

int Fixed::getRawBits(void) const {
	return this->int_value;
}

void Fixed::setRawBits(int const raw) {
	this->int_value = raw;
}
