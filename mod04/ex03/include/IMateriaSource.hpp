/*
 * Name: Luna del Valle
 * File: IMateriaSource.hpp
 * Created on: Sunday Aug 10, 2025 12:29:43 CEST
 */

#ifndef IMATERIASOURCE_HPP

#define IMATERIASOURCE_HPP

#include <AMateria.hpp>

class IMateriaSource {
    public:
        virtual ~IMateriaSource ();

        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
    private:
		
};

#endif /* end of include guard IMATERIASOURCE_HPP */

