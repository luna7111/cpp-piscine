/*
 * Name: Luna del Valle
 * File: AMateria.cpp
 * Created on: Wednesday Aug 13, 2025 18:28:16 CEST
 */

#include <AMateria.hpp>

/* Default destructor */
AMateria::~AMateria() {
    std::cout<<"AMateria destructor called"<<std::endl;
}

std::string const& AMateria::getType() const {
    return type;
}
