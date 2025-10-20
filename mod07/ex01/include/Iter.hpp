/*
 * Name: Luna del Valle
 * File: iter.hpp
 * Created on: miércoles oct 15, 2025 14:22:48 CEST
 */

#ifndef ITER_HPP

#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T*ptr, const size_t size, void (*f)(T&)) {
	for (size_t i = 0; i < size; i++) {
		f(ptr[i]);
	}
}


#endif /* end of include guard ITER_HPP */

