/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Wednesday Jul 30, 2025 15:00:30 CEST
 */

#include <iostream>
#include <ClapTrap.hpp>
#include <ScavTrap.hpp>        
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>

int main() {

    {
        DiamondTrap king("King");

        king.attack("Demon");
        king.beRepaired(10);
        king.debugPrint();
        
    }

}
