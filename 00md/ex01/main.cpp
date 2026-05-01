/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 13:30:27 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

void greeting(void);
static std::string getInput(const std::string& prompt);
static void addContact(PhoneBook& pb);

int	main(void)
{
	PhoneBook pb;
	std::string input;
	
	greeting();
	while (true)
	{
		std::cin >> input;
		std::cin.ignore();

		if (input == "ADD")
			addContact(pb);
		else if (input == "SEARCH")
		{
			break;
		}
		else if (input == "EXIT")
			break;
	}
	return (0);	
}

void greeting(void)
{
	std::cout << "Hello and welcome to your new Phonebook.\n";
	std::cout << "Enter one of three commands. The program only accepts ADD, SEARCH and EXIT.\n";
}

static std::string getInput(const std::string& prompt)
{
	std::string input;
	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty.\n";
	} while (input.empty());
	return (input);	
}

static void addContact(PhoneBook& pb)
{
	std::string fn, ln, nn, pn, ds;
	fn = getInput("First Name: ");
	ln = getInput("Last Name: ");
	nn = getInput("Nick Name: ");
	pn = getInput("Phone Number: ");
	ds = getInput("Darkest Secret: ");
	pb.addContact(fn, ln, nn, pn, ds);
}
