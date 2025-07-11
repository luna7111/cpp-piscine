//                                          _.._  .           .
//  HumanA.hpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Weapon.hpp>
#include <iostream>

class HumanA {
	private:
		std::string	name;
		Weapon&	weapon;
	public:
		HumanA(std::string _name, Weapon& _weapon);
		~HumanA(void);
		void	attack(void);
};
