/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Wednesday Jul 30, 2025 15:00:30 CEST
 */

#include <iostream>
#include <ClapTrap.hpp>
#include <FragTrap.hpp>

int main() {

    {
        ClapTrap mia("Mia");

        mia.attack("Bob");
        mia.takeDamage(5);
        mia.beRepaired(5);
    }

    std::cout<<std::endl;

    {
        FragTrap toby("Finn");

        toby.attack("Tom");
        toby.takeDamage(5);
        toby.beRepaired(5);
        toby.highFivesGuys();
    }

    std::cout<<std::endl;
    
    {
        FragTrap eli("Eli");

        for (int i = 51; i > 0; i--)
            eli.attack("Dummy");
    }

    std::cout<<std::endl;

    {
    
        FragTrap miguel("Miguel");

        for (int i = 10; i > 0; i--) {
            miguel.takeDamage(10);
            miguel.attack("David");
        }

    }
}
