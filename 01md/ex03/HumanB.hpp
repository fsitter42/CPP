/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:27:51 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/08 17:12:58 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUBANB_HPP
#define HUBANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
		HumanB();		
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon *weapon);
		
};


#endif