/*
 * Name: Luna del Valle
 * File: HumanB.cpp
 * Created on: Monday Jul 14, 2025 00:02:33 CEST
 */

#include <HumanB.hpp>
#include <Weapon.hpp>

HumanB::HumanB(std::string _name) {
	name = _name;	
    weapon = NULL;
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon& _weapon) {
	weapon = &_weapon;
}

void	HumanB::attack(void) {
    if (weapon == NULL) {
        std::cout<<name<<" attacked using mean words"<<std::endl;
        return ;
    }
	std::cout<<name<<" attacked using "<<weapon->getType()<<std::endl;
}
