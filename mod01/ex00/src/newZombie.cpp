/*
 * Name: Luna del Valle
 * File: newZombie.cpp
 * Created on: Sunday Jul 13, 2025 14:47:20 CEST
 */

#include <Zombie.hpp>

Zombie *newZombie(std::string _name) {
    Zombie *new_zombie = new Zombie(_name);
    return (new_zombie);
}
