#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

template <typename C>
typename C::const_iterator easyfind(const C& container, const int& toFind)
{
	typename C::const_iterator it;

	it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw (42);	
	return (it);
}

template<typename C>
typename C::iterator easyfind(C& container, const int& toFind)
{
	typename C::iterator it;
	it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw (42);
	return (it);
}

template <typename C>
typename C::const_reverse_iterator easyfindLast(const C& container, const int& toFind)
{
	typename C::const_reverse_iterator it;

	it = std::find(container.rbegin(), container.rend(), toFind);
	if (it == container.rend())
		throw (42);	
	return (it);
}

template<typename C>
typename C::reverse_iterator easyfindLast(C& container, const int& toFind)
{
	typename C::reverse_iterator  it;
	it = std::find(container.rbegin(), container.rend(), toFind);
	if (it == container.rend())
		throw (42);
	return (it);
}

#endif // !EASYFIND_HPP
