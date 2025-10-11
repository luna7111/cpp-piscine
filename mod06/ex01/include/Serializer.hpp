/*
 * Name: Luna del Valle
 * File: Serializer.hpp
 * Created on: sábado oct 11, 2025 00:34:03 CEST
 */

#ifndef SERIALIZER_HPP

#define SERIALIZER_HPP

#include <Data.hpp>
#include <stdint.h>

class Serializer {
    private:
        Serializer ();
		Serializer (const Serializer& other);
        virtual ~Serializer ();
		Serializer& operator=(const Serializer& rhs);

    public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
		
};

#endif /* end of include guard SERIALIZER_HPP */

