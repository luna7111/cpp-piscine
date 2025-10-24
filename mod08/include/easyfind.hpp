/*
 * Name: luna
 * File: easyfind.hpp
 * Created on: 24/10/25 15:52
 */

#ifndef MOD08_EASYFIND_HPP
#define MOD08_EASYFIND_HPP

#include <exception>
#include <algorithm>

class NotFound: public std::exception {
    public: const char* what() const throw() { return "Member not found"; }
};

template <typename T>
typename T::iterator easyfind(T &container, int i) {
    typename T::iterator it = std::find(container.begin(), container.end(), i);
    if (it == container.end()) {
        throw NotFound();
    }
    return it;
}

#endif //MOD08_EASYFIND_HPP