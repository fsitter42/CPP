#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);

    Point inside(1, 1);
    Point outside(10, 10);
    Point onEdge(0, 0);

    if (bsp(a, b, c, inside))
        std::cout << "in\n";
    else
        std::cout << "out\n";
    if (bsp(a, b, c, outside))
        std::cout << "in\n";
    else
        std::cout << "out\n";
    if (bsp(a, b, c, onEdge))
        std::cout << "in\n";
    else
        std::cout << "out\n";
}