/*
 * Name: Luna del Valle
 * File: Bureaucrat.cpp
 * Created on: Thursday Aug 21, 2025 14:43:52 CEST
 */

#include <Bureaucrat.hpp>
#include <iostream>

/* Default constructor */
Bureaucrat::Bureaucrat(): name("default"), grade(MINIMUM_GRADE) {
    std::cout<<"Bureaucrat default constructor called"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, unsigned int _grade): name(_name) {

    std::cout<<"Bureaucrat "<<_name<<" constructor called"<<std::endl;

    if (_grade > MINIMUM_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    }
    if (_grade < MAXIMUM_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    }
    this->grade = _grade;
}

/* Copy constructor */
Bureaucrat::Bureaucrat(const Bureaucrat& source) {
    std::cout<<"Bureaucrat copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    std::cout<<"Bureaucrat copy assignment operator called"<<std::endl;

    this->grade = rhs.grade;

    return (*this);
}

/* output stream operator */
std::ostream& operator << (std::ostream &out, Bureaucrat& src) {
    out << src.getName() << " (" << src.getGrade() << ")" << std::endl;
    return out;
}

/* Default destructor */
Bureaucrat::~Bureaucrat() {
    std::cout<<"Bureaucrat destructor called"<<std::endl;
}

void Bureaucrat::incrementGrade() {
    if (this->grade <= MAXIMUM_GRADE) {
        throw Bureaucrat::GradeTooHighException();
    }
    this->grade -= 1;
}

void Bureaucrat::decrementGrade() {
    if (this->grade >= MINIMUM_GRADE) {
        throw Bureaucrat::GradeTooLowException();
    }
    this->grade += 1;
}

const std::string Bureaucrat::getName() {
    return this->name;
}

unsigned int Bureaucrat::getGrade() {
    return this->grade;
}
