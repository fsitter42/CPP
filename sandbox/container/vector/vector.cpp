#include <vector>
#include <iostream>
#include <typeinfo>

int main()
{
	std::vector<int> v;

	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;
	v.push_back(5);
	std::cout << *v.begin() << std::endl;
	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;
	
	std::cout << "distance " << std::distance(v.begin(), v.end()) << std::endl;
	v.reserve(9);
	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;

	std::cout << "x\n";	
	std::vector<int> x;
	std::cout << x.size() << std::endl;
	std::cout << x.capacity() << std::endl;
	x.insert(x.end(), v.begin(), v.end());	
	std::cout << x.size() << std::endl;
	std::cout << x.capacity() << std::endl;
	std::cout << v[0];
	std::cout << v.at(0);
	std::cout << "\n\n\n" << typeid(*(x.begin())).name() << std::endl; 
}

