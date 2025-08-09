/*
 * Name: Luna del Valle
 * File: Cat.hpp
 * Created on: Sunday Aug 03, 2025 11:55:00 CEST
 */

#ifndef CAT_HPP

#define CAT_HPP

#include <string>
#include <Animal.hpp>

class Cat: public Animal{
    public:
        Cat ();
		Cat (const Cat& other);
        virtual ~Cat ();
		Cat& operator=(const Cat& rhs);

        void makeSound(void) const;
    private:
		
};

#endif /* end of include guard CAT_HPP */

