/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:38:31 by fsitter           #+#    #+#             */
/*   Updated: 2026/04/27 15:27:55 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <cctype>
#include <iostream>

#include "contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[8];
	int _count;

  public:
	void printContact(int index);
};

#endif
