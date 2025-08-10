/*
 * Name: Luna del Valle
 * File: Ice.hpp
 * Created on: Sunday Aug 10, 2025 00:28:13 CEST
 */

#ifndef ICE_HPP

#define ICE_HPP

#include <ICharacter.hpp>
#include <AMateria.hpp>

class Ice: public AMateria {
    public:
        Ice ();
		Ice (const Ice& other);
        virtual ~Ice ();
		Ice& operator=(const Ice& rhs);

        AMateria* clone() const;
        void use(ICharacter& target);
    private:
		
};

#endif /* end of include guard ICE_HPP */
