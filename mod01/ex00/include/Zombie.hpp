/*
 * Name: Luna del Valle
 * File: Zombie.hpp
 * Created on: Sunday Jul 13, 2025 23:43:31 CEST
 */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class	Zombie {
	private:
		std::string	name;
	public:
		Zombie(std::string _name);
		~Zombie(void);
		void	announce(void);
};

Zombie	*newZombie(std::string _name);
void	randomChump(std::string _name);
#endif
