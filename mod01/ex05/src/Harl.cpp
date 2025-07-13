/*
 * Name: Luna del Valle
 * File: Harl.cpp
 * Created on: Monday Jul 14, 2025 00:05:37 CEST
 */

#include <Harl.hpp>
#include <iostream>

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
}

void	Harl::info(void) {
	std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void	Harl::warning(void) {
	std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<<std::endl;
}

void	Harl::error(void) {
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void	Harl::complain(std::string level) {
	std::string level_array[4] = {"debug", "info", "warning", "error"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (size_t i = 0; i < 4; i++) {
		if (level == level_array[i]) {
			(this->*functions[i])();
			return ;
		}
	}
	std::cout<<"*Harl complains about random nonsense*"<<std::endl;
}
