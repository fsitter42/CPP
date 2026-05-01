/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 13:32:52 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

std::string PhoneBook::truncate(const std::string& s) const
{
	if (s.length() > 10)
	{
		return (s.substr(0, 9) + ".");
	}
	return (s);
}

PhoneBook::PhoneBook () : _count(0) {}

void PhoneBook::addContact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds)
{
	contacts[_count % 8].setFirstName(fn);
	contacts[_count % 8].setLastName(ln);
	contacts[_count % 8].setNickName(nn);
	contacts[_count % 8].setPhoneNum(pn);
	contacts[_count % 8].setSecrect(ds);
	_count++;
}
void PhoneBook::printContact(int index) const
{
	if (index < 0 || index >= 8 || index >= (int)_count)
	{
		std::cout << "The index you choose is out of bound.\n";
		return ;
	}
	std::cout << contacts[index].getFirstName() << "\n";
	std::cout << contacts[index].getLastName() << "\n";
	std::cout << contacts[index].getNickName() << "\n";
	std::cout << contacts[index].getPhoneNum() << "\n";
	std::cout << contacts[index].getSecrect() << "\n";
}

void PhoneBook::printAll() const
{
	std::cout << std::right;
	std::cout << "|" << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nick name" << "|\n";
	size_t limit = (_count < 8) ? _count : 8;
	for (size_t i = 0; i < limit; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].getNickName()) << "|\n";
	}
	
}
