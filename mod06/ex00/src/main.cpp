/*
 * Name: luna
 * File: main.cpp
 * Created on: 9/10/25 3:14
 */

#include <ScalarConverter.hpp>
#include <iostream>

int main(int argn, char** argv) {
    if (argn != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return 0;
    }
    ScalarConverter::convert(argv[1]);
}