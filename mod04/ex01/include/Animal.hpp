/*
 * Name: Luna del Valle
 * File: Animal.hpp
 * Created on: Sunday Aug 03, 2025 11:19:09 CEST
 */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <string>

class Animal {
    public:
        Animal ();
		Animal (const Animal& other);
        virtual ~Animal ();
		Animal& operator=(const Animal& rhs);

        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string type;
};

#endif /* end of include guard ANIMAL_HPP */

