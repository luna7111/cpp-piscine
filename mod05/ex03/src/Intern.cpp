/*
 * Name: luna
 * File: Intern.cpp
 * Created on: 7/10/25 21:46
 */

#include <Intern.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

Intern::Intern() {}

Intern::Intern(const Intern &src) {(void)src;}

Intern::~Intern() {}

Intern& Intern::operator = (const Intern& rhs) {
    (void)rhs;
    return *this;
}

AForm *Intern::makeForm(std::string name, std::string target) {
    std::string known_types[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    unsigned int i = 0;

    for (; i < 3; i++) {
        if (known_types[i] == name) {
            break;
        }
    }

    switch (i) {
        case 0:
            return new ShrubberyCreationForm(target);
        case 1:
            return new RobotomyRequestForm(target);
        case 2:
            return new PresidentialPardonForm(target);
        default:
            throw InvalidFormException();
    }

}
