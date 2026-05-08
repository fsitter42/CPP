/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:27:51 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/08 17:01:07 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUBANA_HPP
#define HUBANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
		HumanA();		
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack(void);
		
};


#endif