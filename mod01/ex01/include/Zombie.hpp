//                                          _.._  .           .
//  Zombie.hpp                            .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <string>

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
