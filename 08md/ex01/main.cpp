#include "Span.hpp"
#include <climits>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>

void main2(void)
{
	Span a(9);
	
	a.addNumber(88);
	a.addNumber(1);
	a.addNumber(600);
	a.addNumber(5999);
	a.addNumber(405999);
	a.addNumber(444);
	a.addNumber(5839248);
	a.addNumber(49999999);
	a.addNumber(987);

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
	std::cout << a.shortestSpan() << std::endl;
}



void tenk()
{
    Span x(10000);
    
    for (int i = 0; i < 10000; i++)
    {
        x.addNumber(rand() % INT_MAX);
    }
    std::cout << x.longestSpan() << std::endl;
	std::cout << x.shortestSpan() << std::endl;
	try
	{
	    x.addNumber(rand() % INT_MAX);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void show(const Span& x)
{
    std::cout << x.longestSpan() << std::endl;
	std::cout << x.shortestSpan() << std::endl;
}

void of()
{
    Span a(2);

    a.addNumber(INT_MAX);
    a.addNumber(INT_MIN);

    try
	{
        std::cout << a.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
        std::cout << a.shortestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void tenkRange()
{
	std::vector<int> big;
	for (int i = 0; i < 10000; i++)
		big.push_back(rand() % 4206769);

	Span x(10000);
	x.addRange(big.begin(), big.end());
	std::cout << x.longestSpan() << std::endl;
	std::cout << x.shortestSpan() << std::endl;
}

void tenkRangefail()
{
	std::vector<int> big;
	for (int i = 0; i < 10000; i++)
		big.push_back(rand() % 4206769);

	Span x(9999);
	x.addRange(big.begin(), big.end());
	std::cout << x.longestSpan() << std::endl;
	std::cout << x.shortestSpan() << std::endl;
}

void tenkRangelist()
{
	std::list<int> big;
	for (int i = 0; i < 10000; i++)
		big.push_back(rand() % 4206769);

	Span x(10000);
	x.addRange(big.begin(), big.end());
	std::cout << x.longestSpan() << std::endl;
	std::cout << x.shortestSpan() << std::endl;
}

int main()
{
    of();
	main2();
	srand(time(0));
	tenk();
	tenkRange();
	try
	{
	    tenkRangefail();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	tenkRangelist();
	Span c(9);
	c.addNumber(67);
	c.addNumber(69);
	
	std::cout << c.longestSpan() << std::endl;
	std::cout << c.shortestSpan() << std::endl;
	
	int arr[] = {8, 4, 5, 9};
	std::vector<int> v(arr, arr + 4);
	char carr[] = {'v', 'b', 'c'};
	std::vector<char> f(carr, carr + 3);
	
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
		c.addRange(f.begin(), f.end());
		//c.addRange(v.begin(), v.end());
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

	Span s(4);
	s.addRange(v.begin(), v.end());
	try 
	{
	    s.addNumber(1);
	}
	catch (std::exception& e) 
	{
	    std::cout << e.what() << std::endl;
	}
	Span st(4);
	try 
	{
	    st.addRange(v.begin(), v.begin());
	    st.addNumber(1);
	}
	catch (std::exception& e) 
	{
	    std::cout << e.what() << std::endl;
	}

	std::cout << c.longestSpan() << std::endl;
	std::cout << c.shortestSpan() << std::endl;

	show(c);
}







