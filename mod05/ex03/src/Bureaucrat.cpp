/*
 * Name: Luna del Valle
 * File: Bureaucrat.cpp
 * Created on: sep 18, 2025 19:08:34 CEST
 */

#include <Auxiliary.hpp>
#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <iostream>

/* Default constructor */
Bureaucrat::Bureaucrat(): _name("Default name"), _grade(MINIMUM_GRADE) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade): _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor called" << std::endl;

	if (grade > MINIMUM_GRADE) {
		throw GradeTooLowException();
	}

	if (grade < MAXIMUM_GRADE) {
		throw GradeTooHighException();
	}
}

/* Copy constructor */
Bureaucrat::Bureaucrat(const Bureaucrat& src):
_name(src.getName()),
_grade(src.getGrade())
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

/* Copy assignment operator */
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;

	this->_grade = rhs._grade;

    return *this;
}

/* Default destructor */
Bureaucrat::~Bureaucrat() {
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
	if (this->_grade <= MAXIMUM_GRADE) {
		throw GradeTooHighException();
	}
	this->_grade -= 1;
}

void Bureaucrat::decrementGrade() {
	if (this->_grade >= MINIMUM_GRADE) {
		throw GradeTooLowException();
	}
	this->_grade += 1;
}

void Bureaucrat::signForm(AForm &toSign) const{
	try {
		toSign.beSigned(*this);
	}
	catch (AForm::GradeTooLowException& e) {
		std::cout << this->_name
		<< " couldn't sign " << toSign.getName()
        << " because their grade is too low." << std::endl;
		return ;
	}
	catch (AForm::AlreadySignedException& e) {
		std::cout << this->_name
		<< " couldn't sign " << toSign.getName()
		<< " because it was already signed." << std::endl;
		return ;
	}
	catch (std::exception& e) {
		std::cout << this->_name
		<< " couldn't sign " << toSign.getName()
		<< " because " << e.what()
		<< std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << toSign.getName() << std::endl;
}

void Bureaucrat::executeForm(const AForm& form) const {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch (AForm::NotSignedException &e) {
		std::cout << this->_name
		<< " couldn't execute " << form.getName()
		<< " because the form wasn't signed." << std::endl;
	}
	catch (AForm::GradeTooLowException &e) {
		std::cout << this->_name
		<< " couldn't execute " << form.getName()
		<< " because their grade is too low." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->_name
		<< " couldn't execute " << form.getName()
		<< " because: " << e.what() << std::endl;
	}
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& src) {
	out << src.getName() << ", bureaucrat grade " << src.getGrade() ;
	return out;
}