/*
 * Name: Luna del Valle
 * File: AMateria.hpp
 * Created on: Sunday Aug 10, 2025 00:24:51 CEST
 */

#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <string>
#include <ICharacter.hpp>

class AMateria {
    public:
        AMateria ();
		AMateria (std::string const& type);
		AMateria (const AMateria& other);
        virtual ~AMateria ();
		AMateria& operator=(const AMateria& rhs);

        std::string const& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:
        std::string type;
		
};

#endif /* end of include guard AMATERIA_HPP */

