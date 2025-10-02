/*
 * Name: luna
 * File: ShrubberyCreationForm.hpp
 * Created on: 30/9/25 13:16
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>
#include <string>

class ShrubberyCreationForm: public AForm {
    public: /* Constructors and destructors */
        ShrubberyCreationForm();
        explicit ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& src);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm& rhs);

    private:
        void _authorisedAction() const;

};


#endif //SHRUBBERYCREATIONFORM_HPP