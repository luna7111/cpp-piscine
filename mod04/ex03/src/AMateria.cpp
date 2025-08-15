/*
 * Name: Luna del Valle
 * File: AMateria.cpp
 * Created on: Friday Aug 15, 2025 15:16:49 CEST
 */

#include <AMateria.hpp>
#include <iostream>

/* Default constructor */
AMateria::AMateria() {
    std::cout<<"Default constructor called"<<std::endl;
}

/* Default constructor */
AMateria::AMateria(std::string const& type) {
    std::cout<<"Named constructor called"<<std::endl;
    this->type = type;
}
/* Copy constructor */
AMateria::AMateria(const AMateria& source) {
    std::cout<<"Copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
AMateria& AMateria::operator=(const AMateria& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    this->type = rhs.type;
    return (*this);
}

/* Default destructor */
AMateria::~AMateria() {
    std::cout<<"Destructor called"<<std::endl;
}

std::string const& AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {
    std::cout<<target.getName()<<": bleh :p"<<std::cout;
}
