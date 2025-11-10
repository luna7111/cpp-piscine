/*
 * Name: Luna del Valle
 * File: RPN.hpp
 * Created on: jueves nov 06, 2025 20:50:20 CET
 */

#ifndef RPN_HPP

#define RPN_HPP

#include <queue>
#include <stack>
#include <queue>
#include <string>

typedef enum symbol_type { NUMBER, OPERATION } symbol_type;

typedef struct symbol {
	symbol_type type;
	double value;
	char operation;
} symbol;

class RPN {
    public:
		RPN (const std::string& expression);
		RPN (const RPN& other);
        virtual ~RPN ();
		RPN& operator=(const RPN& rhs);

		double solve();

		class UnexpectedCharacter: public std::exception {
		public: const char* what() const throw() { return "Unexpected Character"; }
		};

    private:
        RPN ();
		std::queue<symbol> _content;
		
};

#endif /* end of include guard RPN_HPP */

