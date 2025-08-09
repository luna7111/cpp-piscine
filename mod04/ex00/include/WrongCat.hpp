/*
 * Name: Luna del Valle
 * File: WrongCat.hpp
 * Created on: Saturday Aug 09, 2025 15:44:42 CEST
 */

#ifndef WRONGCAT_HPP

#define WRONGCAT_HPP

#include <WrongAnimal.hpp>
#include <string>

class WrongCat: public WrongAnimal {
    public:
        WrongCat ();
		WrongCat (const WrongCat& other);
        virtual ~WrongCat ();
		WrongCat& operator=(const WrongCat& rhs);

        void makeSound(void) const;
    private:
		
};

#endif /* end of include guard WRONGCAT_HPP */

