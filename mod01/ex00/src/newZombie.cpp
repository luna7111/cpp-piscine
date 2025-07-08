//                                          _.._  .           .
//  newZombie.cpp                         .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Zombie.hpp>

Zombie	*newZombie(std::string _name) {
	Zombie	*new_zombie = new Zombie(_name);
	return (new_zombie);
}
