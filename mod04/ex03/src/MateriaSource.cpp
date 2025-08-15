/*
 * Name: Luna del Valle
 * File: MateriaSource.cpp
 * Created on: Friday Aug 15, 2025 11:13:40 CEST
 */

#include <MateriaSource.hpp>

/* Default constructor */
MateriaSource::MateriaSource() {
    std::cout<<"Default constructor called"<<std::endl;
    for (int i = 0; i < 4; i++) {
        this->inventory[i].status = EMPTY;
    }
}

/* Copy constructor */
MateriaSource::MateriaSource(const MateriaSource& source) {
    std::cout<<"Copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
MateriaSource& MateriaSource::operator=(cont MateriaSource& rhs) {
    std::cout<<"Copy assignment operator called"<<std::endl;

    for (int i = 0; i < 4; i++) {
        this->inventory[i] = rhs.inventory[i];
    }

    return (*this);
}

/* Default destructor */
MateriaSource::~MateriaSource() {
    std::cout<<"Destructor called"<<std::endl;
}

void learnMateria(AMateria* materia) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i].status == EMPTY) {

            this-inventory[i].status == EQUIPED;
            this-inventory[i].materia = materia;

            std::cout<<"Learned "<<materia->getType()<<std::endl;
            return;
        }
    }
}
