/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: viernes oct 24, 2025 15:16:34 CEST
 */

#include <iostream>
#include <easyfind.hpp>
#include <vector>
#include <list>

int main()
{
    {
        std::vector<int> test;

        test.push_back(42);
        test.push_back(2);
        test.push_back(9);

        try {
            std::cout << *easyfind(test, 2) << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            std::cout << *easyfind(test, 0) << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
    }

    std::cout << std::endl;

    {
        std::list<int> test;

        test.push_back(42);
        test.push_back(2);
        test.push_back(9);

        try {
            std::cout << *easyfind(test, 2) << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            std::cout << *easyfind(test, 0) << std::endl;
        }
        catch (std::exception & e) {
            std::cerr << e.what() << std::endl;
        }
    }
    return 0;
}

