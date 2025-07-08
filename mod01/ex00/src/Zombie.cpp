//                                          _.._  .           .
//  Zombie.cpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

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
