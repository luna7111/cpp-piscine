/*
 * Name: Luna del Valle
 * File: Cat.cpp
 * Created on: Sunday Aug 03, 2025 16:52:57 CEST
 */

#include <Animal.hpp>
#include <Brain.hpp>
#include <Cat.hpp>
#include <iostream>

/* Default constructor */
Cat::Cat() {
    std::cout<<"Cat default constructor called"<<std::endl;

    this->type = "Cat";
    this->brain = new Brain;
}

/* Copy constructor */
Cat::Cat(const Cat& source): Animal() {
    std::cout<<"Cat copy constructor called"<<std::endl;

    this->brain = new Brain(*source.brain);
    this->type = source.type;
}

/* Copy assignment operator */
Cat& Cat::operator=(const Cat& rhs) {
    std::cout<<"Cat copy assignment operator called"<<std::endl;

    this->type = rhs.type;

    delete this->brain;
    this->brain = new Brain(*rhs.brain);

    return (*this);
}

/* Default destructor */
Cat::~Cat() {
    std::cout<<"Cat destructor called"<<std::endl;
    delete this->brain;
}


void Cat::makeSound(void) const {
    std::cout<<"Meow"<<std::endl;
}

void Cat::checkBrainIntegrity(void) {
    this->brain->checkIntegrity();
}
