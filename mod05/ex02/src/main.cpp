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
#include <Auxiliary.hpp>

int main() {

    try {
        ShrubberyCreationForm doc("file");
        Bureaucrat angela("Angela", 138);

        angela.executeForm(doc);
        angela.signForm(doc);
        angela.incrementGrade();
        angela.signForm(doc);
        angela.executeForm(doc);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
