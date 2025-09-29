/*
 * Name: luna
 * File: main.cpp
 * Created on: 19/9/25 15:21
 */

#include <Bureaucrat.hpp>
#include <iostream>
#include <fstream>

int main() {

    try {
        Bureaucrat pablo("Pablo", 100);

        std::cout << "[Test] getName(): " << pablo.getName() << std::endl;
        std::cout << "[Test] getGrade(): " << pablo.getGrade() << std::endl;

        std::cout << "[Test] Insertion overload: " << pablo << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] Instantiate with grade = 0: " << std::endl;
        Bureaucrat jasmine("Jasmine", 0);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] Instantiate with grade = 2 and call incrementGrade() two times:" << std::endl;
        Bureaucrat nina("Nina", 2);

        std::cout << nina << std::endl;
        nina.incrementGrade();
        std::cout << nina << std::endl;
        nina.incrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] Instantiate with grade = 149 and call decrementGrade() two times:" << std::endl;
        Bureaucrat simba("Simba", 149);

        std::cout << simba << std::endl;
        simba.decrementGrade();
        std::cout << simba << std::endl;
        simba.decrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}