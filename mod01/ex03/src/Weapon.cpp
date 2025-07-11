//                                          _.._  .           .
//  Weapon.cpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <iostream>
#include <Weapon.hpp>

Weapon::Weapon(std::string _type) {
	type = _type;
}

Weapon::~Weapon(void) {
}

const std::string&	Weapon::getType(void) {
	return type;
}

void	Weapon::setType(std::string _type) {
	type = _type;
}
