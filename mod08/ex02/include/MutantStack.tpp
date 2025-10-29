/*
 * Name: Luna del Valle
 * File: MutantStack.cpp
 * Created on: domingo oct 26, 2025 11:37:16 CET
 */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include <stack>

/* Default constructor */
template <typename T>
MutantStack<T>::MutantStack() {}

/* Copy constructor */
template <typename T>
MutantStack<T>::MutantStack(const MutantStack& source) {
    *this = source;
}

/* Copy assignment operator */
template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& rhs) {
    std::stack<T>::operator=(rhs);
    return (*this);
}

/* Default destructor */
template <typename T>
MutantStack<T>::~MutantStack() {
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin() {
    return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end() {
    return this->c.end();
}
#endif