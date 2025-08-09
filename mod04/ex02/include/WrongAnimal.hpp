/*
 * Name: Luna del Valle
 * File: WrongAnimal.hpp
 * Created on: Saturday Aug 09, 2025 15:39:50 CEST
 */

#ifndef WRONGANIMAL_HPP

#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
    public:
        WrongAnimal ();
		WrongAnimal (const WrongAnimal& other);
        virtual ~WrongAnimal ();
		WrongAnimal& operator=(const WrongAnimal& rhs);

        virtual void makeSound(void) const;
        std::string getType(void) const;

    protected:
        std::string type;
};

#endif /* end of include guard WRONGANIMAL_HPP */

