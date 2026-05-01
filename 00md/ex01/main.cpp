/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 13:26:24 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cctype>
#include <iostream>
#include <iomanip>

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
			
		}
		else if (input == "EXIT")
			break;
	}
	return (0);	
}

void greeting(void)
{
	std::string greeting;
	std::string intro;
	greeting = "Hello and welcome to your new Phonebook.\n";
	intro = "Enter one of three commands. The program only accepts ADD, SEARCH and EXIT.\n";
	std::cout << greeting << intro;
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
