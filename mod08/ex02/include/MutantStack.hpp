/*
 * Name: Luna del Valle
 * File: MutantStack.hpp
 * Created on: domingo oct 26, 2025 11:30:06 CET
 */

#ifndef MUTANTSTACK_HPP

#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
    public:
        MutantStack ();
		MutantStack (const MutantStack& other);
        virtual ~MutantStack ();
		MutantStack& operator=(const MutantStack& rhs);
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin();
		iterator end();
    private:
		
};

#include <MutantStack.tpp>

#endif /* end of include guard MUTANTSTACK_HPP */

