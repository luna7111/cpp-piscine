/*
 * Name: luna
 * File: ShrubberyCreationForm.cpp
 * Created on: 30/9/25 13:16
 */

#include <ShrubberyCreationForm.hpp>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():
AForm("ShrubberyCreationForm", 145, 137, "Default")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):
AForm("ShrubberyCreationForm", 145, 137, target)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
AForm("ShrubberyCreationForm", 145, 137, src.getTarget())
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::_authorisedAction() const {
    std::ofstream file;
    std::string filename = this->getTarget() + "_shrubbery";

    file.open(filename.c_str());
    file << TREE_ASCII_ART;
    file.close();
}
