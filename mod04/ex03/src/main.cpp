/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Friday Aug 15, 2025 12:42:17 CEST
 */

#include <AMateria.hpp>
#include <Character.hpp>
#include <MateriaSource.hpp>
#include <IMateriaSource.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <iostream>

int main() {
    IMateriaSource* source = new MateriaSource();
    AMateria* new_ice = new Ice();
    AMateria* new_cure = new Cure();
    ICharacter* kevin = new Character("Kevin");
    ICharacter* dummy = new Character("Dummy");

    std::cout<<std::endl;

    source->learnMateria(new_ice);
    source->learnMateria(new_cure);
    
    AMateria* buffer0;
    AMateria* buffer1;

    buffer0 = source->createMateria("ice");
    std::cout<<"Materia type is: "<<buffer0->getType()<<std::endl;
    buffer1 = source->createMateria("cure");
    std::cout<<"Materia type is: "<<buffer1->getType()<<std::endl;
    kevin->equip(buffer0);

    std::cout<<std::endl;

    kevin->use(0, *dummy);
    kevin->use(1, *dummy);

    kevin->equip(buffer1);
    kevin->use(1, *dummy);

    kevin->use(5, *dummy);

    std::cout<<std::endl;

    kevin->unequip(1);
    kevin->unequip(0);


    std::cout<<std::endl;

    delete source;
    delete new_ice;
    delete new_cure;
    delete kevin;
    delete dummy;
    delete buffer0;
    delete buffer1;

    return 0;
}
