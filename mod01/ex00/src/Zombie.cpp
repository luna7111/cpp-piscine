/*
 * Name: Luna del Valle
 * File: Zombie.cpp
 * Created on: Sunday Jul 13, 2025 14:47:20 CEST
 */

#include <Zombie.hpp>
#include <string>
#include <iostream>

Zombie::Zombie(std::string _name) {
    name = _name;
}

Zombie::~Zombie(void) {
    std::cout<<name<<": object destroyed"<<std::endl;
}

void	Zombie::announce(void) {
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
