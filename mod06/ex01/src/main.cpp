/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: sábado oct 11, 2025 02:08:54 CEST
 */

#include <Data.hpp>
#include <Serializer.hpp>
#include <iostream>
#include <stdint.h>

int main(void) {
	Data *original = new struct Data;
	original->someData = "Hello world!";

	uintptr_t ptr = Serializer::serialize(original);

	Data *deserialized = Serializer::deserialize(ptr);

	std::cout << original->someData << std::endl;
	std::cout << ptr << std::endl;
	std::cout << deserialized->someData << std::endl;
}
