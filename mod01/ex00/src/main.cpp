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
		// announce
		Zombie alberto = Zombie("Alberto");
		Zombie sara = Zombie("Sara");

		alberto.announce();
		sara.announce();

		std::cout<<std::endl<<std::endl;
		// newZombie
		Zombie *alex = newZombie("Alex");

		alex->announce();
		delete(alex);	

		std::cout<<std::endl<<std::endl;
		// randomChump
		randomChump("Kit");
		std::cout<<std::endl<<std::endl;
		return (0);
	}
	catch (int e){
		std::cout<<"Exception caught: "<<e<<std::endl;
		return (0);
	}
}
