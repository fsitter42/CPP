#include "ScalarConverter.hpp"
#include <iostream>


int main(int ac, char *av[])
{
	if (ac != 2)
		return (std::cout << "Wrong Number of Arguments\n", 1);
	
	ScalarConverter::convert(av[1]);
}

