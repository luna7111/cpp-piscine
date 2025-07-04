//                                          _.._  .           .
//  Contact.cpp                           .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Contact.hpp>
#include <string>
#include <iostream>

Contact::Contact(void) {
}

Contact::Contact(std::string _first_name, std::string _last_name, std::string _nickname, std::string _phone_number, std::string _darkest_secret) {
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	phone_number = _phone_number;
	darkest_secret = _darkest_secret;
}

Contact::~Contact(void) {
}

void	print_on_field(std::string str) {
	size_t len = str.length();

	if (len > 10) {
		for (int i = 0; i < 9; i++) {
			std::cout<<str[i];
		}
		std::cout<<".";
		return;
	}
	for (int i = 0; i + len < 10; i++) {
		std::cout<<" ";
	}
	std::cout << str;
}

void	Contact::print_overview(int index)
{
	std::cout<<"|";
	std::cout<<"         "<<index;
	std::cout<<"|";
	print_on_field(first_name);
	std::cout<<"|";
	print_on_field(last_name);
	std::cout<<"|";
	print_on_field(nickname);
	std::cout<<"|"<<std::endl;
}

void	Contact::print_info(void)
{
	std::cout<<"First name: "<<first_name<<std::endl;
	std::cout<<"Last name: "<<last_name<<std::endl;
	std::cout<<"Nickname: "<<nickname<<std::endl;
	std::cout<<"Phone number: "<<phone_number<<std::endl;
	std::cout<<"Darkest secret: "<<darkest_secret<<std::endl;
}
