/*
 * Name: Luna del Valle
 * File: WrongCat.cpp
 * Created on: Saturday Aug 09, 2025 15:46:11 CEST
 */

#include <WrongCat.hpp>
#include <iostream>

/* Default constructor */
WrongCat::WrongCat() {
    std::cout<<"WrongCat default constructor called"<<std::endl;

    this->type = "WrongCat";
}

/* Copy constructor */
WrongCat::WrongCat(const WrongCat& source): WrongAnimal() {
    std::cout<<"WrongCat copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    std::cout<<"WrongCat copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
WrongCat::~WrongCat() {
    std::cout<<"WrongCat destructor called"<<std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout<<"\e[3m*Toilet noises*\e[0m"<<std::endl;
}
