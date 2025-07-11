//                                          _.._  .           .
//  HumanB.hpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <Weapon.hpp>
# include <iostream>

class HumanB {
	private:
		std::string	name;
		Weapon*		weapon;
	public:
		HumanB(std::string _name);
		~HumanB(void);
		void	setWeapon(Weapon& _weapon);
		void	attack(void);
};

#endif
