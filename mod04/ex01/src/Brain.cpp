/*
 * Name: Luna del Valle
 * File: Brain.cpp
 * Created on: Friday Aug 08, 2025 19:38:29 CEST
 */

#include <Brain.hpp>
#include <iostream>

/* Default constructor */
Brain::Brain() {
    std::cout<<"Brain default constructor called"<<std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "I like trains!";
}

/* Copy constructor */
Brain::Brain(const Brain& source) {
    std::cout<<"Brain copy constructor called"<<std::endl;

    for (int i = 0; i < 100; i++)
        this->ideas[i] = source.ideas[i];
}

/* Copy assignment operator */
Brain& Brain::operator=(const Brain& rhs) {
    std::cout<<"Brain copy assignment operator called"<<std::endl;

    for (int i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];

    return (*this);
}

/* Default destructor */
Brain::~Brain() {
    std::cout<<"Brain destructor called"<<std::endl;
}

void Brain::checkIntegrity(void) {
    for (int i = 1; i < 100; i++)
        std::cout<<this->ideas[i]<<std::endl;
}
