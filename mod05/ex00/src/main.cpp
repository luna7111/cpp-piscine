/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Friday Aug 22, 2025 19:11:35 CEST
 */

#include <Bureaucrat.hpp>
#include <iostream>

int main(void) {

    try {
        Bureaucrat jimmy;

        std::cout << "Name: " << jimmy.getName() << std::endl;
        std::cout << "Grade: " << jimmy.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat noelle("Noelle", 42);

        std::cout << "Name: " << noelle.getName() << std::endl;
        std::cout << "Grade: " << noelle.getGrade() << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat chloe("Chloe", 90);

        std::cout << chloe << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat francis("Francis", 0);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat mimi("Mimi", 200);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat isabelle("isabelle", 1);

        isabelle.incrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat tom("Tom", 150);

        tom.decrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
