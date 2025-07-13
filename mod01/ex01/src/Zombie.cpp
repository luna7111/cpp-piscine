/*
 * Name: Luna del Valle
 * File: Zombie.cpp
 * Created on: Sunday Jul 13, 2025 23:51:08 CEST
 */

#include <Zombie.hpp>
#include <string>
#include <iostream>

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string _name) {
	name = _name;
}

Zombie::~Zombie(void) {
	std::cout<<name<<": object destroyed"<<std::endl;
}

void	Zombie::change_name(std::string _name) {
	name = _name;
}

void	Zombie::announce(void) {
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
