/*
 * Name: luna
 * File: Form.cpp
 * Created on: 28/9/25 17:13
 */

#include <AForm.hpp>
#include <Auxiliary.hpp>
#include <iostream>

AForm::AForm():
_name("Default"),
_gradeToSign(MAXIMUM_GRADE),
_gradeToExecute(MAXIMUM_GRADE),
_isSigned(false)
{
    std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(const std::string& name, unsigned int gradeToSign, unsigned int gradeToExecute):
_name(name),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute),
_isSigned(false)
{
    std::cout << "Form constructor called" << std::endl;

    if (gradeToSign > MINIMUM_GRADE || gradeToExecute > MINIMUM_GRADE) {
        throw GradeTooLowException();
    }

    if (gradeToSign < MAXIMUM_GRADE || gradeToExecute < MAXIMUM_GRADE) {
        throw GradeTooHighException();
    }

}

AForm::AForm(const AForm& src):
_name(src.getName()),
_gradeToSign(src.getGradeToSign()),
_gradeToExecute(src.getGradeToExecute()),
_isSigned(src.getSignature())
{
    std::cout << "Form copy constructor called" << std::endl;
}

AForm& AForm::operator = (const AForm& rhs) {
    this->_isSigned = rhs.getSignature();

    return *this;
}

AForm::~AForm() {
    std::cout << "Form destructor called" << std::endl;
}

std::string AForm::getName() const {
    return this->_name;
}

unsigned int AForm::getGradeToSign() const {
    return this->_gradeToSign;
}

unsigned int AForm::getGradeToExecute() const {
    return this->_gradeToExecute;
}

bool AForm::getSignature() const {
    return this->_isSigned;
}

void AForm::beSigned(const Bureaucrat& signatory) {
    if (signatory.getGrade() > this->_gradeToSign) {
        throw GradeTooLowException();
    }

    if (this->_isSigned == true) {
        throw AlreadySignedException();
    }

    this->_isSigned = true;
}

std::ostream& operator << (std::ostream& out, const AForm& src) {
    out << src.getName()
    << ", grade to sign " << src.getGradeToSign()
    << ", grade to execute " << src.getGradeToExecute() << ".";

    if (src.getSignature() == true) {
        out << " Signed.";
    }
    else {
        out << " Unsigned.";
    }

    return out;
}