/*
 * Name: luna
 * File: main.cpp
 * Created on: 24/10/25 18:43
 */

#include <cstdlib>

#include "../include/Span.hpp"
#include <iostream>
#include <limits.h>

int main() {
    srand(time(0));
    std::string buf;

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
    try {
        Span test(5);

        test.addNumber(5);
        test.addNumber(1);
        test.addNumber(10);
        std::cout << "shortest: " << test.shortestSpan() << std::endl;
        std::cout << "longest: " << test.longestSpan() << std::endl;

        test.addNumber(6);
        test.addNumber(20);
        std::cout << "shortest: " << test.shortestSpan() << std::endl;
        std::cout << "longest: " << test.longestSpan() << std::endl;

        test.addNumber(42); // This throws an exception
    }
    catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Press enter for next test." << std::endl;
    std::getline(std::cin, buf);
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    try {
        Span test(5);

        test.fillRandom(5, 0, 100);
        for (unsigned int i = 0; i < 5; i++) {
            std::cout << test[i] << std::endl;
        }
        std::cout << std::endl;

        std::cout << "shortest: " <<  test.shortestSpan() << std::endl;
        std::cout << "longest: " << test.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "---------------------------------------------------------------------------------------" << std::endl;
    std::cout << "Press enter for next test." << std::endl;
    std::getline(std::cin, buf);
    std::cout << "---------------------------------------------------------------------------------------" << std::endl;

    try {
        Span test(50000);

        test.fillRandom(50000, 0, 100000);
        std::cout << ":p" << std::endl;
        for (unsigned int i = 0; i < 50000; i++) {
            std::cout << i << ": "<< test[i] << std::endl;
        }
        std::cout << std::endl;
        std::cout << "shortest: " << test.shortestSpan() << std::endl;
        std::cout << "longest: " << test.longestSpan() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}
