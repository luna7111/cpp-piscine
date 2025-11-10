/*
 * Name: Luna del Valle
 * File: RPN.cpp
 * Created on: jueves nov 06, 2025 21:28:52 CET
 */

#include <RPN.hpp>
#include <iostream>

/* Default constructor */
RPN::RPN() {
    std::cout<<"RPN default constructor called"<<std::endl;
}

/* Copy constructor */
RPN::RPN(const RPN& source) {
    std::cout<<"RPN copy constructor called"<<std::endl;

    *this = source;
}

/* Copy assignment operator */
RPN& RPN::operator=(const RPN& rhs) {
    std::cout<<"RPN copy assignment operator called"<<std::endl;

    (void)rhs;

    return (*this);
}

/* Default destructor */
RPN::~RPN() {
    std::cout<<"RPN destructor called"<<std::endl;
}

RPN::RPN(const std::string & expression) {
    size_t i = 0;

    while (std::isspace(expression[i])) i++;

    while (i < expression.length()) {
        symbol current_symbol;
        if (std::isdigit(expression[i])) {
            current_symbol.type = NUMBER;
            current_symbol.value = expression[i] - '0';
            this->_content.push(current_symbol);
            i++;
            continue;
        }

        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            current_symbol.type = OPERATION;
            current_symbol.operation = expression[i];
            this->_content.push(current_symbol);
            i++;
            continue;
        }

        if (std::isspace(expression[i])) {
            i++;
            continue;
        }
        std::cerr << "Unexpected character '" << expression[i] << "'" << std::endl;
        throw UnexpectedCharacter();
    }
}

double RPN::solve() {
    std::stack<symbol> operands;

    while (!this->_content.empty()) {
        switch (this->_content.front().type) {
            case NUMBER:
                operands.push(this->_content.front());
                this->_content.pop();
                break;
            case OPERATION:
                if (operands.size() < 2) {
                    std::cerr << "Unexpected character '" << this->_content.front().operation << "'" << std::endl;
                    throw UnexpectedCharacter();
                }
                symbol rhs = operands.top();
                operands.pop();
                symbol lhs = operands.top();
                operands.pop();

                symbol result;
                result.type = NUMBER;
                switch (this->_content.front().operation) {
                    case '+':
                        this->_content.pop();
                        result.value = lhs.value + rhs.value;
                        break;
                    case '-':
                        this->_content.pop();
                        result.value = lhs.value - rhs.value;
                        break;
                    case '*':
                        this->_content.pop();
                        result.value = lhs.value * rhs.value;
                        break;
                    case '/':
                        this->_content.pop();
                        result.value = lhs.value / rhs.value;
                        break;
                    default:
                        std::cerr << "Unexpected character '" << this->_content.front().operation << "'" << std::endl;;
                        throw UnexpectedCharacter();
                }

                operands.push(result);


                break;
        }
    }

    if (operands.size() != 1) {
        std::cerr << "Unexpected character in expression" << std::endl;
        throw UnexpectedCharacter();
    }

    return operands.top().value;
}