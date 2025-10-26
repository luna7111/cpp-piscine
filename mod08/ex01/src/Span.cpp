/*
 * Name: Luna del Valle
 * File: Span.cpp
 * Created on: viernes oct 24, 2025 17:24:12 CEST
 */

#include <Span.hpp>
#include <iostream>
#include <algorithm>
#include <limits.h>

/* Default constructor */
Span::Span() {
	this->_size = 0;
}

Span::Span(unsigned int N) {
    this->_size = N;
}

/* Copy constructor */
Span::Span(const Span& source) {
    *this = source;
}

/* Copy assignment operator */
Span& Span::operator=(const Span& rhs) {
	this->_size = rhs.size();
    for (unsigned int i = 0; i < this->_size; i++) {
        this->_content[i] = rhs[i];
    }

    return (*this);
}

/* Default destructor */
Span::~Span() {
    std::cout<<"Span destructor called"<<std::endl;
}

void Span::addNumber(int number) {
    if (this->_content.size() >= this->_size) {
        throw NoSpaceLeftException();
    }
    this->_content.push_back(number);
    std::sort(this->_content.begin(), this->_content.end());
}

void Span::_addNoSort(int number) {
    if (this->_content.size() >= this->_size) {
        throw NoSpaceLeftException();
    }
    this->_content.push_back(number);
}

int Span::shortestSpan() const {
    int shortest = INT_MAX;
    for (unsigned int i = 1; i < this->_content.size(); i++) {
            shortest = std::min(shortest, this->_content[i] - this->_content[i - 1]);
    }
    return shortest;
}

int Span::longestSpan() const {
    int longest = 0;
    for (unsigned int i = 1; i < this->_content.size(); i++) {
        longest = std::max(longest, this->_content[i] - this->_content[i - 1]);
    }
    return longest;
}

int Span::operator[](unsigned int index) const {
    return this->_content[index];
}

unsigned int Span::size() const {
    return this->_size;
}

void Span::fillRandom(unsigned int amount, int min, int max) {
    if (min >= max) {
        throw WrongRangeException();
    }

    for (unsigned int i = 0; i < amount; i ++) {
        int generated_number = rand();
        generated_number = generated_number % (max - min);
        generated_number += min;
        this->_addNoSort(generated_number);
    }
    std::sort(this->_content.begin(), this->_content.end());
}
