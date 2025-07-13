/*
 * Name: Luna del Valle
 * File: Zombie.hpp
 * Created on: Sunday Jul 13, 2025 23:48:33 CEST
 */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie {
	private:
		std::string	name;
	public:
		Zombie(void);
		Zombie(std::string _name);
		~Zombie(void);
		void	change_name(std::string _name);
		void	announce(void);
};

Zombie	*zombieHorde(int N, std::string _name);
#endif
