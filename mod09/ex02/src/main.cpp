/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: sábado nov 15, 2025 17:51:00 CET
 */

#include <iostream>
#include <PmergeMe.hpp>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./PmergeMe <sequence>" << std::endl;
        return 1;
    }

    try {
        std::string input(argv[1]);

        for (int i = 2; i < argc; ++i) {
            input.append(" ");
            input.append(argv[i]);
        }

        PmergeMe merger(input);

        std::cout << "Unsorted sequence: " << merger.getContents() << std::endl;;
        merger.sortContents();
        std::cout << "Sorted sequence: " << merger.getContents() << std::endl;;
        std::cout << "Time spent sorting using std::vector: " << merger.getTimeToSortVector() << "μs" << std::endl;
        std::cout << "Time spent sorting using std::list: " << merger.getTimeToSortList() << "μs" << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}
