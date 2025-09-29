/*
 * Name: luna
 * File: ShrubberyCreationForm.hpp
 * Created on: 30/9/25 1:07
 */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <AForm.hpp>
#include <Bureaucrat.hpp>


class ShruberyCreationForm: public AForm {
    void execute(const Bureaucrat &executor) const;
}

#endif //SHRUBBERYCREATIONFORM_HPP