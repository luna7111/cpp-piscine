/*
 * Name: Luna del Valle
 * File: Dog.cpp
 * Created on: Sunday Aug 03, 2025 22:25:00 CEST
 */

#include <Dog.hpp>
#include <iostream>

/* Default constructor */
Dog::Dog() {
    std::cout<<"Dog default constructor called"<<std::endl;

    this->type = "Dog";
}

/* Copy constructor */
Dog::Dog(const Dog& source): Animal() {
    std::cout<<"Dog copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Dog& Dog::operator=(const Dog& rhs) {
    std::cout<<"Dog copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
Dog::~Dog() {
    std::cout<<"Dog destructor called"<<std::endl;
}


void Dog::makeSound(void) const{
    std::cout<<"wOOF WoOf!"<<std::endl;
}
