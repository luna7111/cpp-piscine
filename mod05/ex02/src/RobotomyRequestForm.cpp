/*
 * Name: luna
 * File: ShrubberyCreationForm.cpp
 * Created on: 30/9/25 13:16
 */

#include <AForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <iostream>
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm():
AForm("RobotomyRequestForm", RRF_GRADE_TO_SIGN, RRF_GRADE_TO_EXECUTE, "Default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target):
AForm("RobotomyRequestForm", RRF_GRADE_TO_SIGN, RRF_GRADE_TO_EXECUTE, target)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
AForm("RobotomyRequestForm", RRF_GRADE_TO_SIGN, RRF_GRADE_TO_EXECUTE, src.getTarget())
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::_authorisedAction() const {
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}