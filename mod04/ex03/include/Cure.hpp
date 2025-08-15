/*
 * Name: Luna del Valle
 * File: Cure.hpp
 * Created on: Sunday Aug 10, 2025 12:22:49 CEST
 */

#ifndef CURE_HPP

#define CURE_HPP

#include <AMateria.hpp>
#include <string>

class Cure: public AMateria {
    public:
        Cure ();
		Cure (const Cure& other);
        virtual ~Cure ();
		Cure& operator=(const Cure& rhs);

        virtual AMateria *clone() const;
        virtual void use(ICharacter& target);
    protected:
        std::string type;
		
};

#endif /* end of include guard CURE_HPP */

