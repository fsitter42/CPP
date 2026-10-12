#include "iter.hpp"
#include "../ex00/whatever.hpp"
#include <cstddef>
#include <iostream>

void testc(void);
void testi(void);
void tests(void);

int main(void)
{
    std::cout << "* * * | | | test c | | | * * *" << std::endl;
    testc();
    std::cout << "* * * | | | test i | | | * * *" << std::endl;
    testi();
    std::cout << "* * * | | | test string | | | * * *" << std::endl;
    tests();
}

void testc(void)
{
    char i_arr[] = {65, 66, 67, 91, 96};
    std::size_t size = sizeof(i_arr)/sizeof(i_arr[0]);

    for (std::size_t  i = 0; i < size; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl;

    ::iter<char>(i_arr, size, &::addOne<char>);
    
    for (std::size_t  i = 0; i < size; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl;
}

void testi(void)
{
    int i_arr[] = {1, 2, 3, 4, 5};
    std::size_t size = sizeof(i_arr)/sizeof(i_arr[0]);

    for (std::size_t  i = 0; i < size; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl;

    ::iter<int>(i_arr, size, &::addOne<int>);
    
    for (std::size_t  i = 0; i < size; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl;
}

void tests(void)
{
    std::string i_arr[] = {"hey", "hi", "hello"};
    std::size_t size = sizeof(i_arr)/sizeof(i_arr[0]);

    for (std::size_t  i = 0; i < size; i++)
        std::cout << i_arr[i] << " ";
    std::cout << std::endl;

    ::iter<std::string>(i_arr, size, &::pwint<const std::string>);
    
    std::cout << std::endl;
}