/*
 * Name: Luna del Valle
 * File: Weapon.cpp
 * Created on: Monday Jul 14, 2025 00:02:56 CEST
 */

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
