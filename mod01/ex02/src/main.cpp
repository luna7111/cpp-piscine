//                                          _.._  .           .
//  main.cpp                              .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

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
