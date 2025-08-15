/*
 * Name: Luna del Valle
 * File: ICharacter.cpp
 * Created on: Friday Aug 15, 2025 14:21:19 CEST
 */

#include <ICharacter.hpp>

/* Default constructor */
ICharacter::ICharacter() {
    std::cout<<"Default constructor called"<<std::endl;
}

/* Copy constructor */
ICharacter::ICharacter(const ICharacter& source) {
    std::cout<<"Copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
ICharacter& ICharacter::operator=(cont ICharacter& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    return (*this);
}

/* Default destructor */
ICharacter::~ICharacter() {
    std::cout<<"Destructor called"<<std::endl;
}


