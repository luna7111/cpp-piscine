//                                          _.._  .           .
//  HumanA.cpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

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
