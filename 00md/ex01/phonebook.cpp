/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/04/25 14:25:37 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

class Contact
{
  private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phonenumber;
	std::string darkest_secrect;

  public:
	std::string getFname(int index)
	{
		
		return first_name;
	}
};

class PhoneBook
{
  private:
	Contact contacts[8];
	int _count;

  public:
	void printContact(int index)
	{
		std::cout << contacts->first_name[index];
	};
};

int	main(void)
{
	std::string greeting;
	std::string intro;
	greeting = "Hello and welcome to your new Phonebook.\n";
	intro = "Enter one of three commands. The program only accepts ADD, SEARCH and EXIT.";
	std::cout << greeting << intro << std::endl;
}
