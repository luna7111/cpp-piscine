/*
 * Name: Luna del Valle
 * File: Ice.cpp
 * Created on: Wednesday Aug 13, 2025 14:11:51 CEST
 */

#include <Ice.hpp>

/* Default constructor */
Ice::Ice(): AMateria("ice") {
    std::cout<<"Ice default constructor called"<<std::endl;
}

/* Copy constructor */
Ice::Ice(const Ice& source): AMateria("ice") {
    std::cout<<"Ice copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Ice& Ice::operator=(const Ice& rhs) {
    std::cout<<"Ice copy assignment operator called"<<std::endl;
    *this = rhs;
    return (*this);
}

/* Default destructor */
Ice::~Ice() {
    std::cout<<"Ice destructor called"<<std::endl;
}

void Ice::use(ICharacter& target) {
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;
}

AMateria* Ice::clone() const {
    AMateria *clone = new Ice;
    return clone;
}
