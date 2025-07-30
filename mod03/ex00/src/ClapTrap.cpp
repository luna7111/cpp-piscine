/*
 * Name: Luna del Valle
 * File: ClapTrap.cpp
 * Created on: Wednesday Jul 30, 2025 14:41:30 CEST
 */

#include <iostream>
#include <climits>
#include <ClapTrap.hpp>

/* Default constructor */
ClapTrap::ClapTrap() {
    std::cout<<"Default constructor called"<<std::endl;
    this->name = "default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

/* Named constructor */
ClapTrap::ClapTrap(std::string _name) {
    std::cout<<"Named constructor called ("<<_name<<")"<<std::endl;
    this->name = _name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

/* Copy constructor */
ClapTrap::ClapTrap(const ClapTrap& source) {
    std::cout<<"Copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    this->name = rhs.name;
    this->hit_points = rhs.hit_points;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.attack_damage;
    return (*this);
}

/* Default destructor */
ClapTrap::~ClapTrap() {
    std::cout<<"Destructor called"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->energy_points <= 0) {
        std::cout<<"ClapTrap "<<this->name<<" tried to be repaired but they were too tired."<<std::endl;
        return ;
    }   

    if (this->hit_points <= 0) {
        std::cout<<"ClapTrap "<<this->name<<" tried to be repaired but they were too damaged."<<std::endl;
        return ;
    }

    amount = std::min(amount, UINT_MAX - this->hit_points); 

    this->hit_points += amount;

    this->energy_points -= std::min(1u, this->energy_points); 
    std::cout<<"ClapTrap "<<this->name<<" was repaired by "<<amount<<" hit points."<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    amount = std::min(amount, this->hit_points);

    this->hit_points -= amount;

    std::cout<<"ClapTrap "<<this->name<<" took "<<amount<<" damage points."<<std::endl;

}

/* attack member function */
void ClapTrap::attack(const std::string& target) {

    if (this->energy_points <= 0) {
        std::cout<<"ClapTrap "<<this->name<<" tried to attack "<<target<<" but they were too tired."<<std::endl;
        return ;
    }

    if (this->hit_points <= 0) {
        std::cout<<"ClapTrap "<<this->name<<" tried to attack "<<target<<" but they were too damaged."<<std::endl;
        return ;
    }

    this->energy_points -= std::min(1u, this->energy_points); 
    std::cout<<"ClapTrap "<<this->name<<" attacks "<<target<<", causing "<<this->attack_damage<<" poins of damage!"<<std::endl;

}
