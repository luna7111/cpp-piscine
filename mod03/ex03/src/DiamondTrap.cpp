/*
 * Name: Luna del Valle
 * File: DiamondTrap.cpp
 * Created on: Monday Aug 04, 2025 19:08:36 CEST
 */

#include <iostream>
#include <ClapTrap.hpp>
#include <DiamondTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

/* Default constructor */
DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name") {
    std::cout<<"DiamondTrap default constructor called"<<std::endl;

    this->name = "default";
}

/* Named constructor */ 
DiamondTrap::DiamondTrap(std::string _name): ClapTrap(_name + "_clap_name")  {
    std::cout<<"DiamondTrap named constructor called ("<<_name<<")"<<std::endl;

    this->name = _name;
}

/* Copy constructor */
DiamondTrap::DiamondTrap(const DiamondTrap& source) {
    std::cout<<"DiamondTrap copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
    std::cout<<"DiamondTrap copy assignment operator called"<<std::endl;
    
    this->name = rhs.name;

    return (*this);
}

/* Default destructor */
DiamondTrap::~DiamondTrap() {
    std::cout<<"Destructor called"<<std::endl;
}


