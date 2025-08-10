/*
 * Name: Luna del Valle
 * File: ICharacter.hpp
 * Created on: Sunday Aug 10, 2025 12:00:16 CEST
 */

#ifndef ICHARACTER_HPP

#define ICHARACTER_HPP

#include <string>
#include <AMateria.hpp>

class ICharacter {
    public:
        virtual ~ICharacter () {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;

    private:
		
};

#endif /* end of include guard ICHARACTER_HPP */

