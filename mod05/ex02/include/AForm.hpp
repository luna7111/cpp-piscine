/*
 * Name: luna
 * File: Form.hpp
 * Created on: 28/9/25 17:13
 */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <Bureaucrat.hpp>

class AForm {

    /* Constructors and destructors */
    public:
        AForm();
        AForm(const std::string& name, unsigned int gradeToSign, unsigned int gradeToExecute, const std::string& target);
        AForm(const AForm& src);
        virtual ~AForm();
        AForm& operator = (const AForm& rhs);

    /* attributes */
    private:
        const std::string _name ;
        const unsigned int _gradeToSign;
        const unsigned int _gradeToExecute;
        bool _isSigned;
        const std::string _target;

    /* methods*/
    public:
        std::string getName() const;
        bool getSignature() const;
        unsigned int getGradeToSign() const;
        unsigned int getGradeToExecute() const;
        std::string getTarget() const;

        void beSigned(const Bureaucrat& signatory);
        void execute(const Bureaucrat & executor) const;
    private:
        virtual void _authorisedAction() const = 0;

    /* Exceptions */
    public:
        class GradeTooHighException: public std::exception {
        public: const char* what() const throw() { return "Exception: Grade too high."; }
        };

        class GradeTooLowException: public std::exception {
        public: const char* what() const throw() { return "Exception: Grade too low."; }
        };

        class AlreadySignedException: public std::exception {
        public: const char* what() const throw() { return "Exception: Form is already signed."; }
        };

        class NotSignedException: public std::exception {
        public: const char* what() const throw() { return "Exception: Form has to be signed."; }
        };
};

std::ostream& operator << (std::ostream& out, const AForm& src);

#endif //FORM_HPP