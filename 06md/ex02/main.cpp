#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

int main()
{
    A a;
    B b;
    C c;
    Base base;

    identify(a);
    identify(&b);
    identify(base);
}