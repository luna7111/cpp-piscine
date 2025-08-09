/*
 * Name: Luna del Valle
 * File: Brain.hpp
 * Created on: Friday Aug 08, 2025 19:27:49 CEST
 */

#ifndef BRAIN_HPP

#define BRAIN_HPP

#include <string>

class Brain {
    public:
        Brain ();
		Brain (const Brain& other);
        virtual ~Brain ();
		Brain& operator=(const Brain& rhs);

        void checkIntegrity(void);

    private:
        std::string ideas[100];
};

#endif /* end of include guard BRAIN_HPP */

