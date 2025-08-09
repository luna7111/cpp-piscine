/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Sunday Aug 03, 2025 21:26:54 CEST
 */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>
#include <iostream>

int main(void) {
    
    /* { */
    /*     const Animal* generic = new Animal(); */
        
    /*     std::cout<<generic->getType()<<std::endl; */
    /*     generic->makeSound(); */
    /*     delete generic; */
    /* } */

    /* std::cout<<std::endl; */

    {
        const Animal* kitty = new Cat();

        std::cout<<kitty->getType()<<std::endl;
        kitty->makeSound();
        delete kitty;
    }

    std::cout<<std::endl;

    {
        const Animal* doggo = new Dog();

        std::cout<<doggo->getType()<<std::endl;
        doggo->makeSound();
        delete doggo;
    }

}
