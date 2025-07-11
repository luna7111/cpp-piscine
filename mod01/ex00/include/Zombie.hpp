//                                          _.._  .           .
//  Zombie.hpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

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
