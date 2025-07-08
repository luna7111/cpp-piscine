//                                          _.._  .           .
//  randomChump.cpp                       .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Zombie.hpp>

void	randomChump(std::string name) {
	Zombie	chump = Zombie(name);
	chump.announce();
}
