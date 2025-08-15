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
        this->inventory[y].status = EMPTY;
    }
    std::cout<<"Character default constructor called"<<std::endl;
}

/* Default constructor */
Character::Character(std::string _name) {
    this->name = _name;
    for (int i = 0; i < 4; i++) {
        this->inventory[i].status = EMPTY;
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
        if (this->inventory[i].status == EMPTY) {
            this->inventory[i].status = EQUIPED;
            this->inventory[i].materia = materia;
            std::cout<<"Materia equiped"<<std::endl;
            return;
        }
    }
}

void Charecter::unequip(int index) {
    if (this->inventory_slot_status[i] == EMPTY) {
        return;
    }
    inventory_slot_status[i] == EMPTY;
    std::cout<<"Materia unequipped"<<std::endl;
}

void Character::use(int index,  ICharecter& target) {
    if (this->inventory[index].status == EMPTY) {
        std::cout<<"Empty slot"<<std::endl;
        return;
    }
    this->inventory[index].materia.use(target);
}
