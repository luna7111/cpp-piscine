//                                          _.._  .           .
//  phonebook.cpp                         .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <PhoneBook.hpp>
#include <iostream>
#include <string>

int	main(void) {
	PhoneBook	phone_book;
	std::string user_input;

	while (1) {
		std::cout<<"Enter command:"<<std::endl;
		std::getline(std::cin, user_input);
		if (user_input == "ADD" || user_input == "add")
				phone_book.add_contact();
		else if (user_input == "SEARCH" || user_input == "search")
				phone_book.search_contact();
		else if (user_input == "EXIT" || user_input == "exit") {
			std::cout<<"Goodbye!"<<std::endl;
			phone_book.~PhoneBook();
			return (0);
		}
	}
}
