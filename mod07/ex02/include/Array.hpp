/*
 * Name: Luna del Valle
 * File: Array.hpp
 * Created on: lunes oct 20, 2025 13:43:12 CEST
 */

#ifndef ARRAY_HPP

#define ARRAY_HPP

template <typename T>
class Array {
    public:
        Array ();
        Array (unsigned int size);
		Array (const Array& other);
        virtual ~Array ();
		Array& operator=(const Array& rhs);

		T& operator [] (unsigned int index) const;
		unsigned int size() const;
    private:
		T* content;
		unsigned int _size;
		
};

#include <Array.tpp>

#endif /* end of include guard ARRAY_HPP */

