/*
 * Name: luna
 * File: RobotomyRequestForm.hpp
 * Created on: 30/9/25 13:16
 */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <AForm.hpp>
#include <string>

class RobotomyRequestForm: public AForm {
    public: /* Constructors and destructors */
        RobotomyRequestForm();
        explicit RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& src);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator = (const RobotomyRequestForm& rhs);

    private:
        void _authorisedAction() const;

};

#endif