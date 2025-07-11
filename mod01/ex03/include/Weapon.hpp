//                                          _.._  .           .
//  Weapon.hpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

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
