/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:44:02 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/08 17:12:50 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name)
{}

void HumanB::attack (void)
{
	
	std::cout << name << " attacks with their ";
	
	if (weapon != NULL)
		std::cout << weapon->getType();
	else
		std::cout << "bare hands";
	std::cout << "\n";
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
