/*
 * Name: luna
 * File: Form.hpp
 * Created on: 28/9/25 17:13
 */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <Bureaucrat.hpp>

class Form {

    public: /* Constructors and destructors */
        Form();
        Form(const std::string& name, unsigned int gradeToSign, unsigned int gradeToExecute);
        Form(const Form& src);
        virtual ~Form();
        Form& operator = (const Form& rhs);

    private: /* attributes */
        const std::string _name ;
        const unsigned int _gradeToSign;
        const unsigned int _gradeToExecute;
        bool _isSigned;

    public: /* methods */

        std::string getName() const;
        bool getSignature() const;
        unsigned int getGradeToSign() const;
        unsigned int getGradeToExecute() const;

        void beSigned(const Bureaucrat& signatory);

    public: /* Exceptions */
        class GradeTooHighException: public std::exception {
        public: const char* what() const throw() { return "Exception: Grade too high."; }
        };

        class GradeTooLowException: public std::exception {
        public: const char* what() const throw() { return "Exception: Grade too low."; }
        };

        class AlreadySignedException: public std::exception {
        public: const char* what() const throw() { return "Exception: Form is already signed."; }
        };

};

std::ostream& operator << (std::ostream& out, const Form& src);


#endif //FORM_HPP