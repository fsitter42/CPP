#include <iostream>
#include "XORString.hpp"

int main()
{
    constexpr auto secret = XorString("niceee"); 
    
    char buffer[7];
    secret.decrypt(buffer);
    
    std::cout << buffer << std::endl;
    return 0;
}