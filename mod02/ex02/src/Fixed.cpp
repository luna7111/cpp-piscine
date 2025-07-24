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
Fixed& Fixed::operator = (const Fixed& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    this->int_value = rhs.getRawBits();

    return (*this);
}

/* ARITHMETIC OPERATORS */

/* Plus sign operator */
Fixed Fixed::operator + (const Fixed& rhs) {
    return (this->toFloat() + rhs.toFloat());
}

/* Minus sign operator */
Fixed Fixed::operator - (const Fixed& rhs) {
    return (this->toFloat() - rhs.toFloat());
}

/* Multiplication sign operator */
Fixed Fixed::operator * (const Fixed& rhs) {
    return (this->toFloat() * rhs.toFloat());
}

/* Division sign operator */
Fixed Fixed::operator / (const Fixed& rhs) {
    return (this->toFloat() / rhs.toFloat());
}

/* COMPARISON OPERATORS */

/* Equality operator */
bool Fixed::operator == (const Fixed& rhs) {
    return (this->getRawBits() == rhs.getRawBits());
}

/* Inequality operator */
bool Fixed::operator != (const Fixed& rhs) {
    return (this->getRawBits() != rhs.getRawBits());
}

/* Greater than operator */
bool Fixed::operator > (const Fixed& rhs) {
    return (this->getRawBits() > rhs.getRawBits());
}

/* Greater or equal than operator */
bool Fixed::operator >= (const Fixed& rhs) {
    return (this->getRawBits() >= rhs.getRawBits());
}

/* Less than operator */
bool Fixed::operator < (const Fixed& rhs) {
    return (this->getRawBits() < rhs.getRawBits());
}

/* Less or equal than operator */
bool Fixed::operator <= (const Fixed& rhs) {
    return (this->getRawBits() <= rhs.getRawBits());
}

/* INCREMENT AND DECREMENT OPERATORS */

/* pre-increment operator */
Fixed& Fixed::operator ++ () {

    ++this->int_value;

    return *this;

}

/* pre-decrement operator */
Fixed& Fixed::operator -- () {

    --this->int_value;

    return *this;

}

/* post-increment operator */
Fixed Fixed::operator ++ (int) {
    Fixed unmodified(*this);

    ++(this->int_value);

    return unmodified;
}

/* post-decrement operator */
Fixed Fixed::operator -- (int) {
    Fixed unmodified(*this);

    --(this->int_value);

    return unmodified;
}


/* Insertion operator overloading */
std::ostream& operator << (std::ostream& out, const Fixed &src) {
    out << src.toFloat();

    return out;
}





/* MEMBER FUNCTIONS */

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a.int_value > b.int_value)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    if (a.int_value > b.int_value)
        return a;
    return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a.int_value < b.int_value)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    if (a.int_value < b.int_value)
        return a;
    return b;
}

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
