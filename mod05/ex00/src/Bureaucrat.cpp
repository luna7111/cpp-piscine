/*
 * Name: Luna del Valle
 * File: Bureaucrat.cpp
 * Created on: jueves sep 18, 2025 19:08:34 CEST
 */

#include <Bureaucrat.hpp>
#include <iostream>

/* Default constructor */
Bureaucrat::Bureaucrat(): _name("Default name"), _grade(MINIMUM_GRADE) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor called" << std::endl;

	if (grade > MINIMUM_GRADE) {
		throw GradeTooLowException();
	}
	if (grade < MAXIMUM_GRADE) {
		throw GradeTooHighException();
	}
}

/* Copy constructor */
Bureaucrat::Bureaucrat(const Bureaucrat& source) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;

    *this = source;
}

/* Copy assignment operator */
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;

	this->_grade = rhs._grade;

    return (*this);
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

std::ostream& operator << (std::ostream& out, Bureaucrat& src) {
	out << src.getName() << " (" << src.getGrade() << ") ";
	return out;
}