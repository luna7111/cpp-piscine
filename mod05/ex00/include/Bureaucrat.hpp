/*
 * Name: Luna del Valle
 * File: Bureaucrat.hpp
 * Created on: Thursday Aug 21, 2025 14:41:22 CEST
 */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <string>

const unsigned int MINIMUM_GRADE = 150;
const unsigned int MAXIMUM_GRADE = 1;

class Bureaucrat {
    public:
        Bureaucrat ();
        Bureaucrat(std::string _name, unsigned int _grade);
		Bureaucrat (const Bureaucrat& other);
        virtual ~Bureaucrat ();
		Bureaucrat& operator=(const Bureaucrat& rhs);

        const std::string getName();
        unsigned int getGrade();

        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException: public std::exception {
            public: const char* what() const throw() { return "Exception: Grade too high."; }
        };

        class GradeTooLowException: public std::exception {
            public: const char* what() const throw() { return "Exception: Grade too low."; }
        };

    private:
	    const std::string name;
        unsigned int grade;
};

std::ostream& operator << (std::ostream& out, Bureaucrat& src);

#endif /* end of include guard BUREAUCRAT_HPP */
