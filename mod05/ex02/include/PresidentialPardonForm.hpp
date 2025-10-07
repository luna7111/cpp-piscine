/*
 * Name: luna
 * File: PresidentialPardonForm.hpp
 * Created on: 30/9/25 13:16
 */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <AForm.hpp>
#include <string>

class PresidentialPardonForm: public AForm {
    public: /* Constructors and destructors */
        PresidentialPardonForm();
        explicit PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& src);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator = (const PresidentialPardonForm& rhs);

    private:
        void _authorisedAction() const;

};

const unsigned int PPF_GRADE_TO_SIGN = 25;
const unsigned int PPF_GRADE_TO_EXECUTE = 5;
#endif