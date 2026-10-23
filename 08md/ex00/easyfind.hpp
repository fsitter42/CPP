#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

/*
template <typename C>
typename C::const_iterator easyfind(const C& container, const int& toFind)
{
	typename C::const_iterator it;
	for (it = container.begin(); it != container.end(); ++it)
	{
		if (*it == toFind)
			return (it);
	}
	throw (42);	
}
*/








template <typename C>
typename C::const_iterator easyfind(const C& container, const int& toFind)
{
	typename C::const_iterator it;
	it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw (42);	
	return (it);
}

#endif // !EASYFIND_HPP
