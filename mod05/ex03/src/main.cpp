/*
 * Name: luna
 * File: main.cpp
 * Created on: 19/9/25 15:21
 */

#include <Bureaucrat.hpp>
#include <iostream>
#include <fstream>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <cstdlib>

#include "Auxiliary.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {

    srand(time(0));


    try {
        std::cout << "--- execute() with not enough grade ---" << std::endl;
        PresidentialPardonForm doc("Mumbo");
        Bureaucrat grian("Grian", MINIMUM_GRADE);

        doc.execute(grian);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "--- execute() with enough grade ---" << std::endl;

        PresidentialPardonForm doc("Jevin");
        Bureaucrat xisuma("Xisuma", MAXIMUM_GRADE);

        doc.beSigned(xisuma);
        doc.execute(xisuma);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "--- execute() with no signature ---" << std::endl;

        PresidentialPardonForm doc("Pearl");
        Bureaucrat gemini("Gemini", MAXIMUM_GRADE);

        doc.execute(gemini);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;


    try {
        std::cout << "--- executeForm() with not enough grade ---" << std::endl;

        ShrubberyCreationForm doc("file");
        Bureaucrat angela("Angela", 140);

        angela.signForm(doc);
        std::cout << std::endl;
        angela.executeForm(doc);
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "--- ShrubberyCreationForm ---" << std::endl;

        ShrubberyCreationForm doc("file");
        Bureaucrat angela("Angela", 138);

        angela.signForm(doc);
        std::cout << std::endl;
        angela.executeForm(doc);
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "--- RobotomyRequestForm ---" << std::endl;
        RobotomyRequestForm doc("Dwight");
        Bureaucrat andy("Andy", 45);

        andy.signForm(doc);
        std::cout << std::endl;
        andy.executeForm(doc);
        std::cout << std::endl;
        andy.executeForm(doc);
        std::cout << std::endl;
        andy.executeForm(doc);
        std::cout << std::endl;
        andy.executeForm(doc);
        std::cout << std::endl;
        andy.executeForm(doc);
        std::cout << std::endl;
        andy.executeForm(doc);
        std::cout << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        std::cout << "--- PresidentialPardonForm ---" << std::endl;
        PresidentialPardonForm doc("Ryan");
        Bureaucrat roy("Roy", 5);

        roy.signForm(doc);
        roy.executeForm(doc);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
