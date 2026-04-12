#include "../include/RPN.hpp"

/* Default constructor */
RPN::RPN() {
}

/* Copy constructor */
RPN::RPN(const RPN& source) {
    (void)source;
}

/* Copy assignment operator */
RPN& RPN::operator=(const RPN& rhs) {
    (void)rhs;
    return (*this);
}

/* Default destructor */
RPN::~RPN() {
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
                        if (rhs.value == 0)
                            throw DivisionByZero();
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
