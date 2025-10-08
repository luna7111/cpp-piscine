/*
 * Name: luna
 * File: Intern.hpp
 * Created on: 7/10/25 21:46
 */

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include <AForm.hpp>
#include <string>

class Intern {
    public:
        Intern();
        Intern(const Intern &src);
        virtual ~Intern();
        Intern& operator = (const Intern & rhs);


        AForm* makeForm(std::string name, std::string target);

    class InvalidFormException: public std::exception {
    public: const char* what() const throw() { return "Exception: Form doesn't exist."; }
    };
};


#endif //EX03_INTERN_HPP