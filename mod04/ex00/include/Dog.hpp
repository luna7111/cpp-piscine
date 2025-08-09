/*
 * Name: Luna del Valle
 * File: Dog.hpp
 * Created on: Sunday Aug 03, 2025 22:23:36 CEST
 */

#ifndef DOG_HPP

#define DOG_HPP

#include <string>
#include <Animal.hpp>

class Dog: public Animal {
    public:
        Dog ();
		Dog (const Dog& other);
        virtual ~Dog ();
		Dog& operator=(const Dog& rhs);

        void makeSound(void) const;
    private:
		
};

#endif /* end of include guard DOG_HPP */

