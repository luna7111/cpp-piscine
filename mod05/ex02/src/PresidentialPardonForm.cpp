/*
 * Name: luna
 * File: ShrubberyCreationForm.cpp
 * Created on: 30/9/25 13:16
 */

#include <AForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <iostream>
#include <fstream>
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm():
AForm("PresidentialPardonForm", PPF_GRADE_TO_SIGN, PPF_GRADE_TO_EXECUTE, "Default")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target):
AForm("PresidentialPardonForm", PPF_GRADE_TO_SIGN, PPF_GRADE_TO_EXECUTE, target)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):
AForm("PresidentialPardonForm", PPF_GRADE_TO_SIGN, PPF_GRADE_TO_EXECUTE, src.getTarget())
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::_authorisedAction() const {
    std::cout << "bszrszrsrzrsrz" << std::endl;
    switch (rand() % 2) {
        case 1:
            std::cout << this->getTarget() << " has been successfully robotomized." << std::endl;
            return;
        case 0:
            std::cout << this->getTarget() << "'s robotomy failed." << std::endl;
            return;
        default:
            std::cerr << "Math stopped working :(" << std::cout;
    }
}