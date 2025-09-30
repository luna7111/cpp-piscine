/*
 * Name: luna
 * File: main.cpp
 * Created on: 19/9/25 15:21
 */

#include <Bureaucrat.hpp>
#include <iostream>
#include <fstream>
#include <Form.hpp>

int main() {

    try {
        Form document1;

        std::cout << "[Test] getName(): " << document1.getName() << std::endl;
        std::cout << "[Test] getGradeToSign(): " << document1.getGradeToSign() << std::endl;
        std::cout << "[Test] getGradeToExecute(): " << document1.getGradeToExecute() << std::endl;
        std::cout << "[Test] getSignature(): " << std::boolalpha <<document1.getSignature() << std::endl;
        std::cout << "[Test] Insertion overload: " << document1 << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] instantiate a form with gradeToSign = 151" << std::endl;
        Form document2("Doc 2", 151, 1);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] instantiate a form with gradeToSign = 0" << std::endl;
        Form document2("Doc 2", 0, 1);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] instantiate a form with gradeToExecute = 151" << std::endl;
        Form document2("Doc 2", 1, 151);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "[Test] instantiate a form with gradeToExecute = 0" << std::endl;
        Form document2("Doc 2", 1, 0);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat michael("Michael", 50);
        Bureaucrat jan("Jan", 20);

        Form doc("Paper Sale Form", 30, 1);

        std::cout << "[Test] Grade 50 Bureaucrat signs form with gradeToSign = 30" << std::endl;
        michael.signForm(doc);

        std::cout << "[Test] Grade 20 Bureaucrat signs form with gradeToSign = 30" << std::endl;
        jan.signForm(doc);
        std::cout << doc << std::endl;

        std::cout << "[Test] Bureaucrat signs form that has been signed already" << std::endl;
        jan.signForm(doc);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
