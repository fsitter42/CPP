# include "easyfind.hpp"
#include <iostream>
#include <vector>

int main( void )
{
	try
	{
		std::vector<int> a;
		a.push_back(1);
		a.push_back(5);
		std::vector<int>::const_iterator it = easyfind(a, 1);	
		std::cout << *it << std::endl;
		it = easyfind(a, 4);	
		std::cout << *it << std::endl;
	}
	catch (...)
	{
		std::cout << "faaaaa\n";
	}
	return 0;
}
