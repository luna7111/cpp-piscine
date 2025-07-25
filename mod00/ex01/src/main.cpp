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

#define PURPLE "\e[0;35m"
#define WHITE "\e[0;37m"

int	main(void) {
	PhoneBook	phone_book;
	std::string user_input;

	try {
		while (1) {
			std::cout<<PURPLE<<"Enter command:"<<WHITE<<std::endl;
			std::getline(std::cin, user_input);
			if (user_input == "ADD" || user_input == "add")
					phone_book.add_contact();
			else if (user_input == "SEARCH" || user_input == "search")
					phone_book.search_contact();
			else if (user_input == "EXIT" || user_input == "exit") {
				std::cout<<"Goodbye!"<<std::endl;
				return (0);
			}
		}
	}
	catch (int e) {
		std::cout<<"Exception caught: "<<e<<std::endl;
		return (0);
	}
}
