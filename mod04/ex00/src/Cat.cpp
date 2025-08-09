/*
 * Name: Luna del Valle
 * File: Cat.cpp
 * Created on: Sunday Aug 03, 2025 16:52:57 CEST
 */

#include <Cat.hpp>
#include <iostream>

/* Default constructor */
Cat::Cat() {
    std::cout<<"Cat default constructor called"<<std::endl;

    this->type = "Cat";
}

/* Copy constructor */
Cat::Cat(const Cat& source): Animal() {
    std::cout<<"Cat copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Cat& Cat::operator=(const Cat& rhs) {
    std::cout<<"Cat copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
Cat::~Cat() {
    std::cout<<"Cat destructor called"<<std::endl;
}


void Cat::makeSound(void) const {
    std::cout<<"Meow"<<std::endl;
}
