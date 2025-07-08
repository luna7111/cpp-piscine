//                                          _.._  .           .
//  main.cpp                              .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

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
