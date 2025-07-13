/*
 * Name: Luna del Valle
 * File: Weapon.hpp
 * Created on: Monday Jul 14, 2025 00:00:19 CEST
 */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

	class Weapon {
		private:
			std::string	type;
		public:
			Weapon(std::string _type);
			~Weapon(void);
			const	std::string& getType(void);
			void	setType(std::string _type);
	};

#endif
