/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: miércoles oct 15, 2025 14:22:14 CEST
 */

#include <Iter.hpp>
#include <cstddef>
#include <iostream>

void plusone(int& i) {
	i += 1;
}

void upper(char& c) {
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
}

void print_number(const int& nb) {
	std::cout << nb << std::endl;
}

int main(void) {

	{
		int test[] = {1,2,3,4,5};

		for (int i = 0; i < 5; i++) {
			std::cout << test[i] << std::endl;
		}
		std::cout << std::endl;
		::iter(test, 5, plusone);
		for (int i = 0; i < 5; i++) {
			std::cout << test[i] << std::endl;
		}
	}

	std::cout << std::endl;

	{
		char test[] = "hello world";

		std::cout << test << std::endl;
		::iter(test, 11, upper);
		std::cout << test << std::endl;
	}

	std::cout << std::endl;
	
	{
		const int test[] = {245, 67, 21};

		::iter(test, 3, print_number);
	}

}
