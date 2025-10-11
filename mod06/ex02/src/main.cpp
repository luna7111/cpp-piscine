/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: sábado oct 11, 2025 02:08:54 CEST
 */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <iostream>
#include <cstdlib>

Base::~Base(){}
A::~A(){}
B::~B(){}
C::~C(){}

Base* generate(void) {

	switch (rand() % 3) {
	
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			std::cout << "Math stopped working, God help you." << std::cout;
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "Type is A" << std::endl;
		return;
	}

	if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "Type is B" << std::endl;
		return;
	}

	if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "Type is C" << std::endl;
		return;
	}

	std::cout << "D:" << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
	}
	catch (std::exception &e) {
		(void)e;
	}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
	}
	catch (std::exception &e) {
		(void)e;
	}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
	}
	catch (std::exception &e) {
		(void)e;
	}
}

int main(void) {

	srand(time(0));

	Base* idk = generate();

	identify(idk);
	identify(*idk);

	delete idk;
}
