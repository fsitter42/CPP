#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <stack>

void print(const MutantStack<int>& s)
{
	for (MutantStack<int>::const_iterator it = s.begin(); it != s.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void listCompare()
{
	MutantStack<int> m;
	std::list<int>   l;

	for (int i = 0; i < 5; i++)
	{
		m.push(i * 3);
		l.push_back(i * 3);
	}
	std::cout << m.top() << " " << l.back() << std::endl;
	m.pop();
	l.pop_back();
	std::cout << m.size() << " " << l.size() << std::endl;
	print(m);
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void emptyAndWrite()
{
	MutantStack<int> m;
	std::cout << (m.begin() == m.end()) << std::endl;

	m.push(1);
	m.push(2);
	*m.begin() = 42;
	print(m);
	std::cout << *std::find(m.begin(), m.end(), 2) << std::endl;
}

void copyTest()
{
	MutantStack<int> a;
	a.push(1);
	a.push(2);

	MutantStack<int> b(a);
	MutantStack<int> c;
	c = a;
	a.push(3);
	std::cout << a.size() << " " << b.size() << " " << c.size() << std::endl;

	std::stack<int> s(a);
	MutantStack<int> d(s);
	std::cout << d.size() << std::endl;
}

void stringTest()
{
	MutantStack<std::string> m;
	m.push("a");
	m.push("b");
	for (MutantStack<std::string>::iterator it = m.begin(); it != m.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main()
{
	listCompare();
	emptyAndWrite();
	copyTest();
	stringTest();
	return (0);
}