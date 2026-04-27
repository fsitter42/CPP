/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/04/27 15:53:17 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"


int	main(void)
{
	std::string greeting;
	std::string intro;
	greeting = "Hello and welcome to your new Phonebook.\n";
	intro = "Enter one of three commands. The program only accepts ADD, SEARCH and EXIT.";
	std::cout << greeting << intro << std::endl;


	Contact mycontact(0, NULL, NULL, NULL, NULL, NULL);
}
