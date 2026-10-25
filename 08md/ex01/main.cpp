#include "Span.hpp"
#include <iostream>

int main(void)
{
	Span a(4);
	
	a.addNumber(1);
	a.addNumber(2);
	a.addNumber(3);
	a.addNumber(5);

	try
	{
		a.addNumber(1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}	
	std::cout << a.longestSpan() << std::endl;
	Span b(a);	
	std::cout << b.longestSpan() << std::endl;
	Span c(1);
	c.addNumber(1);
	try
	{
		std::cout << c.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}	
	c = b;
	try
	{
		std::cout << c.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}	
	
}

