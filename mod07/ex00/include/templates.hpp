/*
 * Name: Luna del Valle
 * File: templates.hpp
 * Created on: martes oct 14, 2025 23:51:20 CEST
 */

#ifndef TEMPLATES_HPP

#define TEMPLATES_HPP

template <typename T> void swap(T& a, T& b) {
	T buffer = a;
	a = b;
	b = buffer;
}

template <typename T> T min(T a, T b) {
	return (a < b) ? a : b;
}

template <typename T> T max(T a, T b) {
	return (a > b) ? a : b;
}

#endif /* end of include guard TEMPLATES_HPP */

