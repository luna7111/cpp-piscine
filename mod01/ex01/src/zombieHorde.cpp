//                                          _.._  .           .
//  zombieHorde.cpp                       .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Zombie.hpp>
#include <string>

Zombie	*zombieHorde(int N, std::string _name) {
	if (N <= 0)
		return (NULL);
	Zombie	*horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].change_name(_name);
		horde[i].announce();
	}
	return (horde);
}
