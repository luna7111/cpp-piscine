/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Wednesday Jul 23, 2025 16:28:02 CEST
 */

#include <iostream>
#include <Fixed.hpp>

int main(void) {

    {

        Fixed a(5);
        Fixed b(5.5f);

        if (a > b)
            std::cout<<"a is greater than b"<<std::endl;
        else
            std::cout<<"a isn't greater than b"<<std::endl;

        if (a < b)
            std::cout<<"a is less than b"<<std::endl;
        else
            std::cout<<"a isn't less than b"<<std::endl;

        if (a >= b)
            std::cout<<"a is greater or equal than b"<<std::endl;
        else
            std::cout<<"a isn't greater or equal than b"<<std::endl;

        if (a <= b)
            std::cout<<"a is less or equal than b"<<std::endl;
        else
            std::cout<<"a isn't less or equal than b"<<std::endl;

        if (a == b)
            std::cout<<"a is equal to b"<<std::endl;
        else
            std::cout<<"a isn't equal to b"<<std::endl;

        if (a == 5)
            std::cout<<"a is equal to 5"<<std::endl;
        else
            std::cout<<"a isn't equal to 5"<<std::endl;

    }

    std::cout<<std::endl<<std::endl<<std::endl;

    {

        Fixed a(10.8f);
        Fixed b(2);
        Fixed result;

        result = a + b;
        std::cout<<a<<" + "<<b<<" = "<<result<<std::endl;

        result = a - b;
        std::cout<<a<<" - "<<b<<" = "<<result<<std::endl;

        result = a * b;
        std::cout<<a<<" * "<<b<<" = "<<result<<std::endl;

        result = a / b;
        std::cout<<a<<" / "<<b<<" = "<<result<<std::endl;

    }

    std::cout<<std::endl<<std::endl<<std::endl;

    {

        Fixed a;

        std::cout<<a<<std::endl;
        std::cout<<++a<<std::endl;
        std::cout<<a<<std::endl;
        std::cout<<a++<<std::endl;
        std::cout<<a<<std::endl;

    }

    std::cout<<std::endl<<std::endl<<std::endl;

    {

        Fixed a(10.7f);
        Fixed b(15.1f);


        std::cout<<"max = "<<a.max(a, b)<<std::endl;
        std::cout<<"min = "<<a.min(a, b)<<std::endl;
    }

    std::cout<<std::endl<<std::endl<<std::endl;

    {

        const Fixed a(10.7f);
        const Fixed b(15.1f);


        std::cout<<"max = "<<a.max(a, b)<<std::endl;
        std::cout<<"min = "<<a.min(a, b)<<std::endl;
    }

    return 0;
}

