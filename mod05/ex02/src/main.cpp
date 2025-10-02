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
        const ShrubberyCreationForm doc("wiwi");
        const Bureaucrat angela("Angela", MAXIMUM_GRADE);

        doc.execute(angela);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
