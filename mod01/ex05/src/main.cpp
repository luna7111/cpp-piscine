/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Monday Jul 14, 2025 00:05:48 CEST
 */

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
