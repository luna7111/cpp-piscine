/*
 * Name: Luna del Valle
 * File: HumanA.hpp
 * Created on: Sunday Jul 13, 2025 23:59:37 CEST
 */

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
