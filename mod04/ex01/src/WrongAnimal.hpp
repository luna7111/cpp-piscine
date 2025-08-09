/*
 * Name: Luna del Valle
 * File: WrongAnimal.cpp
 * Created on: Saturday Aug 09, 2025 15:41:12 CEST
 */

#include <WrongAnimal.hpp>
#include <iostream>

/* Default constructor */
WrongAnimal::WrongAnimal() {
    std::cout<<"WrongAnimal default constructor called"<<std::endl;

    this->type = "Wrong animal";
}

/* Copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal& source) {
    std::cout<<"WrongAnimal copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    std::cout<<"WrongAnimal copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
WrongAnimal::~WrongAnimal() {
    std::cout<<"WrongAnimal destructor called"<<std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout<<"\e[3m*Unappropriate noises*\e[0m"<<std::endl;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}
