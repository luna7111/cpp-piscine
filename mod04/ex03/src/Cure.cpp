/*
 * Name: Luna del Valle
 * File: Cure.cpp
 * Created on: Wednesday Aug 13, 2025 14:43:35 CEST
 */

#include <Cure.hpp>
#include <iostream>

/* Default constructor */
Cure::Cure(): AMateria("cure") {
    std::cout<<"Cure default constructor called"<<std::endl;
}

/* Copy constructor */
Cure::Cure(const Cure& source) {
    std::cout<<"Cure copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Cure& Cure::operator=(const Cure& rhs) {
    std::cout<<"Cure copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
Cure::~Cure() {
    std::cout<<"Cure destructor called"<<std::endl;
}

void Cure::use(ICharacter& target) {
    std::cout<<"* heals "<<target.getName()<<"'s wounds *"<<std::endl;
}

AMateria* Cure::clone() const {
    AMateria *clone = new Cure;
    return (clone);
}
