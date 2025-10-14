/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: martes oct 14, 2025 23:59:24 CEST
 */

#include <iostream>
#include <templates.hpp>

int main()
{

	{
		int a = 42;
		int b = 13;
		int result;

		result = ::min(a, b);

		std::cout << "min: " << result << std::endl;

		result = ::max(a, b);

		std::cout << "max: " << result << std::endl;

		std::cout << "before swap: " << a << ", " << b << std::endl;

		::swap(a, b);

		std::cout << "after swap: " << a << ", " << b << std::endl;
	}

	{
		std::string a = "blahaj";
		std::string b = "aftonsparv";
		std::string result;

		result = ::min(a, b);

		std::cout << "min: " << result << std::endl;

		result = ::max(a, b);

		std::cout << "max: " << result << std::endl;

		std::cout << "before swap: " << a << ", " << b << std::endl;

		::swap(a, b);

		std::cout << "after swap: " << a << ", " << b << std::endl;

	}

    return 0;
}

