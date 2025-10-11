/*
 * Name: Luna del Valle
 * File: Serializer.cpp
 * Created on: sábado oct 11, 2025 02:03:41 CEST
 */

#include <Serializer.hpp>
#include <stdint.h>

Serializer::Serializer() {}
Serializer::Serializer(const Serializer& source) {
	(void)source;
}
Serializer& Serializer::operator=(const Serializer& rhs) {
	(void)rhs;
    return *this;
}
Serializer::~Serializer() {}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
