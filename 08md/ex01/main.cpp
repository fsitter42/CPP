#include "Span.hpp"
#include <iostream>

//int main(void)
//{
//	Span a(9);
//	
//	a.addNumber(88);
//	a.addNumber(1);
//	a.addNumber(600);
//	a.addNumber(5999);
//	a.addNumber(405999);
//	a.addNumber(444);
//	a.addNumber(5839248);
//	a.addNumber(49999999);
//	a.addNumber(987);
//
////	try
////	{
////		a.addNumber(1);
////	}
////	catch (std::exception& e)
////	{
////		std::cout << e.what() << "\n";
////	}	
////	std::cout << a.longestSpan() << std::endl;
////	Span b(a);	
////	std::cout << b.longestSpan() << std::endl;
////	Span c(1);
////	c.addNumber(1);
////	try
////	{
////		std::cout << c.longestSpan() << std::endl;
////	}
////	catch (std::exception& e)
////	{
////		std::cout << e.what() << "\n";
////	}	
////	c = b;
////	try
////	{
////		std::cout << c.longestSpan() << std::endl;
////	}
////	catch (std::exception& e)
////	{
////		std::cout << e.what() << "\n";
////	}
//	std::cout << a.shortestSpan() << std::endl;
//}
//


int main()
{
	Span c(9);
	c.addNumber(67);
	c.addNumber(69);
	
	std::cout << c.longestSpan() << std::endl;
	std::cout << c.shortestSpan() << std::endl;
	
	std::vector<int> v = {8, 4, 5, 9};	
	std::vector<char> f = {'v', 'b', 'c'};	

	if (typeid(*(f.begin())) == typeid(int))
		std::cout << "same\n";
	else
		std::cout << "not same\n";	
	
	try
	{
		//c.addRange(f.begin(), f.end());
		c.addRange(v.begin(), v.end());
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		c.addRange(v.begin(), v.end());
	}
	catch (...)
	{
		std::cout << "lol\n";
	}
	try
	{
		c.addRange(v.begin(), v.end());
	}
	catch (...)
	{
		std::cout << "lol\n";
	}

	std::cout << c.longestSpan() << std::endl;
	std::cout << c.shortestSpan() << std::endl;
}







