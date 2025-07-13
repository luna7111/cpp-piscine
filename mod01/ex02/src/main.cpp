/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Sunday Jul 13, 2025 23:57:27 CEST
 */

#include <iostream>

int	main(void) {

	try {
		std::string string = "HI THIS IS BRAIN";
		std::string* stringPTR = &string;
		std::string &stringREF = string;

		std::cout<<&string<<std::endl;
		std::cout<<stringPTR<<std::endl;
		std::cout<<&stringREF<<std::endl<<std::endl;
		
		std::cout<<string<<std::endl;
		std::cout<<*stringPTR<<std::endl;
		std::cout<<stringREF<<std::endl;
		return (0);
	}
	catch (int e){
		std::cout<<"Exception caught: "<<e<<std::endl;
		return (0);
	}
}
