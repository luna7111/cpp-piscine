/*
 * Name: Luna del Valle
 * File: Animal.cpp
 * Created on: Sunday Aug 03, 2025 16:36:09 CEST
 */

#include <Animal.hpp>
#include <iostream>

/* Default constructor */
Animal::Animal() {
    std::cout<<"Animal default constructor called"<<std::endl;

    this->type = "Animal";
}

/* Copy constructor */
Animal::Animal(const Animal& source) {
    std::cout<<"Animal copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Animal& Animal::operator=(const Animal& rhs) {
    std::cout<<"Animal copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
Animal::~Animal() {
    std::cout<<"Animal destructor called"<<std::endl;
}

void Animal::makeSound(void) const {
    std::cout<<"\e[3m*Appropriate noises*\e[0m"<<std::endl;
}

std::string Animal::getType(void) const {
    return type;
}
