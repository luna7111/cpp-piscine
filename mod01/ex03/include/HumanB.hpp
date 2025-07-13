/*
 * Name: Luna del Valle
 * File: HumanB.hpp
 * Created on: Sunday Jul 13, 2025 23:59:55 CEST
 */

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
