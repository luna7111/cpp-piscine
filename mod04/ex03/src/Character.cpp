/*
 * Name: Luna del Valle
 * File: Character.cpp
 * Created on: Wednesday Aug 13, 2025 14:09:05 CEST
 */

#include <Character.hpp>
#include <AMateria.hpp>

/* Default constructor */
Character::Character() {
    this->name = "default";
    for (int i = 0; i < 4; i++) {
        this->inventory_slot_status[i] = EMPTY;
    }
    std::cout<<"Character default constructor called"<<std::endl;
}

/* Copy constructor */
Character::Character(const Character& source) {
    std::cout<<"Character copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
Character& Character::operator=(const Character& rhs) {
    std::cout<<"Character copy assignment operator called"<<std::endl;

    return (*this);
}

/* Default destructor */
Character::~Character() {
    std::cout<<"Character destructor called"<<std::endl;
}

void Character::equip(AMateria* materia) {
    for (int i = 0; i < 4 ; i++) {
        if (this->inventory_slot_status[i] == EMPTY) {
            this->inventory_slot_status[i] = EQUIPED;
            this->inventory[i] = materia;
            std::cout<<"Materia equiped"<<std::endl;
            return;
        }
    }
}

void Charecter::unequip(int index) {
    if (this->inventory_slot_status[i] == EQUIPED) {
        inventory_slot_status[i] == EMPTY;
        std::cout<<"Materia unequipped"<<std::endl;
    }
}

void Character::use(int index,  ICharecter& target) {
    if (this->inventory_slot_status[index] == EMPTY) {
        std::cout<<"Empty slot"<<std::endl;
        return;
    }
    this->inventory[index].use(target);
}
