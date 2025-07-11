//                                          _.._  .           .
//  main.cpp                              .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <iostream>
#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>

int	main(void) {

	try {

		{
			Weapon	club = Weapon("crude spiked club");

			HumanA	bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}

		{
			Weapon	club = Weapon("crude spiked club");

			HumanB sandy("Sandy");
			sandy.setWeapon(club);
			sandy.attack();
			club.setType("some other type of club");
			sandy.attack();
		}

	}
	catch (int e){
		std::cout<<"Exception caught: "<<e<<std::endl;
	}

	return 0;
}
