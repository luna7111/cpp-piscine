/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Sunday Jul 13, 2025 23:48:54 CEST
 */

#include <Zombie.hpp>
#include <iostream>

int main(void)
{
	try {
		int	N = 10;
		Zombie *horde = zombieHorde(N, "Jeff");
		delete[] (horde);

		std::cout<<std::endl;

		N = 1;
		horde = zombieHorde(N, "Jeff");
		delete[] (horde);

		std::cout<<std::endl;

		N = 0;
		horde = zombieHorde(N, "Jeff");
		delete[] (horde);
	}
	catch (int e){
		std::cout<<"Exception caught: "<<e<<std::endl;
		return (0);
	}
}
