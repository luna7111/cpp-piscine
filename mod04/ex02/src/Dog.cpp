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
    this->brain = new Brain;
}

/* Copy constructor */
Dog::Dog(const Dog& source): Animal() {
    std::cout<<"Dog copy constructor called"<<std::endl;

    this->brain = new Brain(*source.brain);
    this->type = source.type;
}

/* Copy assignment operator */
Dog& Dog::operator=(const Dog& rhs) {
    std::cout<<"Dog copy assignment operator called"<<std::endl;

    this->type = rhs.type;

    delete this->brain;
    this->brain = new Brain(*rhs.brain);

    return (*this);
}

/* Default destructor */
Dog::~Dog() {
    std::cout<<"Dog destructor called"<<std::endl;
    delete this->brain;
}


void Dog::makeSound(void) const{
    std::cout<<"wOOF WoOf!"<<std::endl;
}
