//                                          _.._  .           .
//  PhoneBook.cpp                         .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Contact.hpp>
#include <PhoneBook.hpp>
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook(void) {
	contact_number = 0;
}

PhoneBook::~PhoneBook(void) {
	for (int i = 0; i < 8; i ++) {
		contact[i].~Contact();
	}
}

void	PhoneBook::cycle_contacts(void) {
	contact[7].~Contact();
	for (int i = 7; i > 0; i--) {
		contact[i] = contact[i - 1];
	}
}

void	PhoneBook::add_contact(void) {
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout<<"Enter first name:"<<std::endl;
	std::getline(std::cin, first_name);
	std::cout<<"Enter last name:"<<std::endl;
	std::getline(std::cin, last_name);
	std::cout<<"Enter nickname:"<<std::endl;
	std::getline(std::cin, nickname);
	std::cout<<"Enter phone number:"<<std::endl;
	std::getline(std::cin, phone_number);
	std::cout<<"Enter their darkest secret:"<<std::endl;
	std::getline(std::cin, darkest_secret);
	cycle_contacts();
	contact[0] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	if (contact_number < 8)
		contact_number++;
}

void	PhoneBook::search_contact(void) {
	std::string	user_input;
	int			index_number;

	for (int i = 0; i < contact_number; i++) {
		contact[i].print_overview(i + 1);
	}

	std::cout<<"Which contact do you want to search?:"<<std::endl;
	std::getline(std::cin, user_input);
	std::stringstream index_stream(user_input);
	index_stream >> index_number;

	while (index_stream.fail() || index_number < 1 || index_number > contact_number) {
		index_stream.clear();
		std::cout<<"Not a valid number. Try again:"<<std::endl;
		index_stream.str(""); //may cause leakage??? idk
		std::getline(std::cin, user_input);
		std::stringstream index_stream(user_input);
		index_stream >> index_number;
	}
	
	contact[index_number - 1].print_info();
}
