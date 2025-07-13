/*
 * Name: Luna del Valle
 * File: HumanA.cpp
 * Created on: Monday Jul 14, 2025 00:02:16 CEST
 */

#include <HumanA.hpp>
#include <Weapon.hpp>

HumanA::HumanA(std::string _name, Weapon& _weapon) : weapon(_weapon) {
	name = _name;	
	weapon = _weapon;
}

HumanA::~HumanA(void) {
}

void	HumanA::attack(void) {
	std::cout<<name<<" attacked using "<<weapon.getType()<<std::endl;
}
