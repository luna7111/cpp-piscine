/*
 * Name: Luna del Valle
 * File: zombieHorde.cpp
 * Created on: Sunday Jul 13, 2025 23:51:21 CEST
 */

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
