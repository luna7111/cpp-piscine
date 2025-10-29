/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: domingo oct 26, 2025 11:29:49 CET
 */

#include <iostream>
#include <list>
#include <MutantStack.hpp>

int main()
{
    {
        MutantStack<int> mts;
        std::list<int> lst;

        mts.push(42);
        mts.push(13);
        mts.push(0);
        lst.push_back(42);
        lst.push_back(13);
        lst.push_back(0);

        std::cout << "MutantStack top(): " << mts.top() << std::endl;
        std::cout << "MutantStack size(): " << mts.size() << std::endl;

        std::cout << std::endl;

        std::cout << "std::list front(): " << lst.back() << std::endl;
        std::cout << "std::list size(): " << lst.size() << std::endl;

        std::cout << std::endl;
		
		{
			MutantStack<int>::iterator mts_it = mts.begin();
			std::list<int>::iterator lst_it = lst.begin();


			std::cout << "MutantStack iterator test: " << std::endl;
			while (mts_it != mts.end()) {
				std::cout << *mts_it << std::endl;
				++mts_it;
			}

			std::cout << "std::list iterator test: " << std::endl;
			while (lst_it != lst.end()) {
				std::cout << *lst_it << std::endl;
				++lst_it;
			}
		}

		{
			MutantStack<int>::iterator mts_it = mts.end();
			std::list<int>::iterator lst_it = lst.end();


			std::cout << "MutantStack iterator test (backwards): " << std::endl;
			while (mts_it != mts.begin()) {
				--mts_it;
				std::cout << *mts_it << std::endl;
			}

			std::cout << "std::list iterator test (backwards): " << std::endl;
			while (lst_it != lst.begin()) {
				--lst_it;
				std::cout << *lst_it << std::endl;
			}
		}

    }
    return 0;
}
