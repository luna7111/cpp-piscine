/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Sunday Aug 03, 2025 21:26:54 CEST
 */

#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <iostream>
#include <cstdlib>

int main() {
    
    /* SUBJECT SUJESTED TEST */ {

        Animal* arr[100];

        for (int i = 0; i < 100; i ++) {
            switch (i % 2) {
                case 0: arr[i] = new Cat; break;
                case 1: arr[i] = new Dog; break;
            }
            arr[i]->makeSound();
        }

        std::cout<<std::endl;

        for (int i = 0; i < 100; i++) {
            delete arr[i];
        }

    }

    std::cout<<std::endl;

    /* DEEP COPY TEST */ {
     
        Cat kitty0;
        Dog doggo0;
     
        std::cout<<std::endl;
     
        {
     
            Cat kitty1;
            Dog doggo1;
     
            std::cout<<std::endl;
     
            kitty0 = kitty1;
            doggo0 = doggo1;
     
            std::cout<<std::endl;
        }
        std::cout<<std::endl;
    }

}
