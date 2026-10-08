#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
    std::cout << "Tests for identify: " << std::endl;
    srand(time(0));
    A a;
    B b;
    C c;
    Base base;

    identify(a);
    identify(&b);
    identify(base);
    identify(&base);

    std::cout << "Tests for generate: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        Base *gen = generate();
        identify(gen);
        delete gen;
    }
    std::cout << "Tests over." << std::endl;
}
