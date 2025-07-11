//                                          _.._  .           .
//  main.cpp                              .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <Harl.hpp>
#include <iostream>

int main(void) {

	Harl harl;

	harl.complain(std::string("debug"));
	harl.complain(std::string("info"));
	harl.complain(std::string("warning"));
	harl.complain(std::string("error"));
	harl.complain(std::string("miau"));
	harl.complain(std::string(""));
	return 0;
}
