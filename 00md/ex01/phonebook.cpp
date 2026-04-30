/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 00:47:12 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook () {}

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
		
	}
	void PhoneBook::printAll() const
	{
		
	}
