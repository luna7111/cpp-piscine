/*
 * Name: Luna del Valle
 * File: Bureaucrat.hpp
 * Created on: jueves sep 18, 2025 18:14:37 CEST
 */

#ifndef BUREAUCRAT_HPP

#define BUREAUCRAT_HPP

#include <string>

class Form;

class Bureaucrat {
    public: /* Constructors and Destructors */
        Bureaucrat ();
        Bureaucrat (std::string name, unsigned int grade);
		Bureaucrat (const Bureaucrat& src);
        virtual ~Bureaucrat ();
		Bureaucrat& operator=(const Bureaucrat& rhs);

	private:
		const std::string _name;
		unsigned int _grade;

	public:
		std::string getName() const;
		unsigned int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		void signForm(Form& toSign) const;

	public: /* Exceptions */
		class GradeTooHighException: public std::exception {
		public: const char* what() const throw() { return "Exception: Grade too high."; }
		};

		class GradeTooLowException: public std::exception {
		public: const char* what() const throw() { return "Exception: Grade too low."; }
		};

};

std::ostream& operator << (std::ostream& out, Bureaucrat& src);

#endif /* end of include guard BUREAUCRAT_HPP */