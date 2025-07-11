//                                          _.._  .           .
//  HumanB.cpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <HumanB.hpp>
#include <Weapon.hpp>

HumanB::HumanB(std::string _name) {
	name = _name;	
}

HumanB::~HumanB(void) {
}

void	HumanB::setWeapon(Weapon& _weapon) {
	weapon = &_weapon;
}

void	HumanB::attack(void) {
	std::cout<<name<<" attacked using "<<weapon->getType()<<std::endl;
}
