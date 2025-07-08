//                                          _.._  .           .
//  megaphone.cpp                         .' .-'`        *
//                                       /  /       +        *
//  by: luna del Valle                   |  |           *
//                                       \  '.___.;       +
//  Creative Commons CC0 1.0 Universal    '._  _.'   .        .
//                                           ``

#include <iostream>

std::string  capitalize_string(char* str)
{
    std::string result = str;
    for (size_t i = 0; str[i] != '\0'; i++) {
        result[i] = std::toupper(str[i]);
    }
    return result;
}

int main(int argc, char** argv)
{
    int index = 1;

	try {
		if (argc > 1) {
			while (index < argc) {
				std::cout << capitalize_string(argv[index]);
				index ++;
			}
			std::cout << std::endl;
			return (0);
		}
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	catch (int e) {
		std::cout<<"Exception caught: "<<e<<std::endl;
		return (0);
	}
}
