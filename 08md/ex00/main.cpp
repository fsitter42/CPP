# include "easyfind.hpp"
#include <iostream>
#include <vector>

//int main( void )
//{
//	try
//	{
//		std::vector<int> a;
//		a.push_back(1);
//		a.push_back(5);
//		std::vector<int>::const_iterator it = easyfind(a, 1);	
//		std::cout << *it << std::endl;
//		it = easyfind(a, 4);	
//		std::cout << *it << std::endl;
//	}
//	catch (...)
//	{
//		std::cout << "faaaaa\n";
//	}
//	return 0;
//}

template<typename C>
void printVector(C& a)
{	
	for (size_t i = 0; i < a.size(); ++i)
		std::cout << a[i];
	std::cout << std::endl;	

	// if I wasnt bound to 98
	//for (int n : a)
	//	std::cout << n << "\n";
}

void revPrintVector(std::vector<int>& a)
{
	std::vector<int>::reverse_iterator it = a.rbegin();
	while (it != a.rend())
	{
		std::cout << *it;
		it++;
	}
	std::cout << std::endl;
} 

void tryVector()
{
	std::vector<int> a;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	printVector(a);
	std::vector<int>::iterator it = easyfind(a, 1);	

	a.insert(it, 4);
	printVector(a);
	revPrintVector(a);
	
	//a.emplace(it, 5);
	//printVector(a);

	std::cout << a.front() << std::endl;
	std::cout << a.back() << std::endl;
	std::cout << a.size() << std::endl;
	std::cout << a.max_size() << std::endl;
	
	try
	{
		std::vector<int>::iterator it = easyfind(a, 8);	
		std::cout << *it << std::endl;
	}
	catch (...)
	{
		std::cout << "Gotcha ... \n";
	}
	std::cout << a.capacity() << std::endl;
	a.reserve(16);
	std::cout << a.capacity() << std::endl;
	//a.shrink_to_fit();
	//std::cout << a.capacity() << std::endl;

	std::vector<int> b(a);
	std::cout << "BBBBBBBBBB\n";
	printVector(b);
	
	b.pop_back();
	printVector(b);
	printVector(a);
	it = b.erase(it);
	printVector(a);
}

void tryVector2()
{
	std::vector<int> a(67);
	printVector(a);
	try
	{
		std::cout << a.at(68) << std::endl;
	}
	catch (...)
	{
		std::cout << "Gotcha ... \n";
	}
	std::cout << a.at(42) << std::endl;
}

void charVec()
{
	std::vector<char> charsA;
	std::vector<char> charsB;

	charsA.assign(4, 'a');
	charsB.assign(5, 'b');

	printVector(charsA);
	printVector(charsB);

	charsA.swap(charsB);

	printVector(charsA);
	printVector(charsB);


	
}

int main()
{
	tryVector();
	tryVector2();
	charVec();
}

