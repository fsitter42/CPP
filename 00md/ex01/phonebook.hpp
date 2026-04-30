/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:38:31 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 00:46:08 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[8];
	size_t _count;

  public:
	PhoneBook ();
  	void addContact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds);
	void printContact(int index) const;
	void printAll() const;
};

#endif
