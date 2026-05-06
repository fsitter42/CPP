/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 13:49:18 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

void greeting(void);
static std::string getInput(const std::string& prompt, bool& eof);
static void addContact(PhoneBook& pb);
static void searchContact(PhoneBook& pb);

int	main(void)
{
	PhoneBook pb;
	std::string input;

	greeting();
	while (true)
	{
		std::cout << "ADD, SEARCH or EXIT? ";
		if (!(std::cin >> input))
        {
            std::cout << "\n";
            break;
        }
		std::cin.ignore();

		if (input == "ADD")
			addContact(pb);
		else if (input == "SEARCH")
			searchContact(pb);
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

static std::string getInput(const std::string& prompt, bool& eof)
{
    std::string input;
    do
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            eof = true;
            return ("");
        }
        if (input.empty())
            std::cout << "Field cannot be empty.\n";
    } while (input.empty());
    return (input);
}

static void addContact(PhoneBook& pb)
{
	std::string fn, ln, nn, pn, ds;
	bool eof = false;
	fn = getInput("First Name: ", eof);
	if (eof)
	    return;
	ln = getInput("Last Name: ", eof);
	if (eof)
	    return;
	nn = getInput("Nick Name: ", eof);
	if (eof)
	    return;
	pn = getInput("Phone Number: ", eof);
	if (eof)
	    return;
	ds = getInput("Darkest Secret: ", eof);
	if (eof)
	    return;
	pb.addContact(fn, ln, nn, pn, ds);
}

static void searchContact(PhoneBook& pb)
{
	std::string input;
	pb.printAll();
	std::cout << "Please insert the index of the contact to print: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		int index = input[0] - 48;
		pb.printContact(index);
	}
	else
		std::cout << "Invalid index.\n";
}
