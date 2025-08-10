/*
 * Name: Luna del Valle
 * File: MateriaSource.hpp
 * Created on: Sunday Aug 10, 2025 13:52:45 CEST
 */

#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP


class MateriaSource {
    public:
        MateriaSource ();
		MateriaSource (const MateriaSource& other);
        virtual ~MateriaSource ();
		MateriaSource& operator=(const MateriaSource& rhs);

        AMateria* createMateria(std::string const& type);
        void learnMateria(AMateria* materia);
    private:
	    AMateria* materias[4];
};

#endif /* end of include guard MATERIASOURCE_HPP */

