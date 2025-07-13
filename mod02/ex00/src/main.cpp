/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Sunday Jul 13, 2025 17:33:27 CEST
 */

#include <Fixed.hpp>
#include <iostream>

int main() {
    Fixed a;
    /* a.setRawBits(42); */
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;

    return 0;
}
