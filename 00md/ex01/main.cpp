/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 00:47:28 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cctype>
#include <iostream>


int	main(void)
{
	std::string greeting;
	std::string intro;
	greeting = "Hello and welcome to your new Phonebook.\n";
	intro = "Enter one of three commands. The program only accepts ADD, SEARCH and EXIT.";
	std::cout << greeting << intro << std::endl;


	Contact mycontact();

	std::cout << mycontact.getFirstName() << "\n";
	std::cout << mycontact.getLastName() << "\n";
	
}
