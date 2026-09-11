#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat a;
	Bureaucrat b("B");
	Bureaucrat c(b);
	Bureaucrat d("D", 42);
	a = d;
	
	std::cout << a.getName() << "\n";
	std::cout << b.getName() << "\n";
	std::cout << c.getName() << "\n";
	std::cout << d.getName() << "\n";
	std::cout << "\n\n\n";

	std::cout << a.getGrade() << "\n";
	std::cout << d.getGrade() << "\n";
	std::cout << b.getGrade() << "\n";
	std::cout << "\n\n\n";
	

	a.increment(1);
	b.increment(1);
	//b.decrement(2);
	try
	{
			std::cout << b << "\n";
			b.decrement(42);
			std::cout << a.getGrade() << "\n";
			std::cout << d.getGrade() << "\n";
			std::cout << b.getGrade() << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << "Exception triggered " << e.what() << std::endl;
		std::cout << "fAAAAA  1\n";
	}
	try
	{
			std::cout << a << "\n";
			a.increment(42);
			std::cout << a.getGrade() << "\n";
			std::cout << d.getGrade() << "\n";
			std::cout << b.getGrade() << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << "Exception triggered " << e.what() << std::endl;
		std::cout << "fAAAAA  2\n";
	}
	try
	{
		Bureaucrat f("F", -1);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception triggered " << e.what() << std::endl;
		std::cout << "fAAAAA 3\n";
	}
	try
	{
		Bureaucrat f("F", 151);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception triggered " << e.what() << std::endl;
		std::cout << "fAAAAA 4\n";
	}
	try
	{
        Bureaucrat g("G", 1);
        Bureaucrat h("H", 150);
        std::cout << g << "\n" << h << "\n";
	}
	catch (std::exception& e)
	{
        std::cout << "Exception triggered " << e.what() << std::endl;
        std::cout << "fAAAAA 5\n";
	}
}
