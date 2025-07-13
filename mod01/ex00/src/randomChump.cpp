/*
 * Name: Luna del Valle
 * File: randomChump.cpp
 * Created on: Sunday Jul 13, 2025 14:47:20 CEST
 */

#include <Zombie.hpp>

void randomChump(std::string name) {
    Zombie chump = Zombie(name);
    chump.announce();
}
