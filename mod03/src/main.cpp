/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Wednesday Jul 30, 2025 15:00:30 CEST
 */

#include <iostream>
#include <ClapTrap.hpp>

int main() {

    {
        ClapTrap mia("Mia");

        mia.takeDamage(5);
        mia.attack("Bob");
        mia.takeDamage(5);
        mia.attack("Ana");
        mia.beRepaired(5);
        mia.attack("Simone");
    }

    std::cout<<std::endl;

    {
        ClapTrap toby("Toby");

        toby.attack("Kris");
        toby.beRepaired(1);
        toby.attack("Kris");
        toby.beRepaired(1);
        toby.attack("Kris");
        toby.beRepaired(1);
        toby.attack("Kris");
        toby.beRepaired(1);
        toby.attack("Kris");
        toby.beRepaired(1);
        toby.attack("Kris");
        toby.beRepaired(1);
        toby.attack("Kris");
        toby.beRepaired(1);
    }

    std::cout<<std::endl;

    {
        ClapTrap rob("Rob");

        rob.takeDamage(10);
        rob.beRepaired(10);
    }
}
