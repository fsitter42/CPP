#include <climits>
#include <cmath>
#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
/*
int isPositive_(int n)
{
    if (n < 0)
        throw 42;
    return n;
}

int main()
{
    int *i = new int();
    std::cout << *i << std::endl;
    try
    {
        int num = 2;
        std::cout << isPositive_(num + 1) << "\n";
    }
    catch (int code)
    {
        std::cout << code << "\n";
    }
    Array<int> a(1);
    Array<int> b(2);

    std::cout << a.size() << "\n";

    int *x = &a[0];
    *x = 4;
    std::cout << *x << "\n";

    std::cout << a[0] << "\n";


    
}

*/
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}