#include "../include/RPN.hpp"

int main(int argc, char** argv) {
    if (argc <= 1) {
        std::cerr << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }

    std::string expression;
    for (int i = 1; i < argc; i++) {
        expression.append(std::string(argv[i]));
    }

    try {
        RPN calc(expression);

        std::cout << calc.solve() << std::endl;
    }
    catch (RPN::DivisionByZero & e) {
        std::cerr << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << "Malformed expression." << std::endl;
    }
    return 0;
}
