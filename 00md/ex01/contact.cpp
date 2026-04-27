/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/04/27 16:29:27 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(int i, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds) : index(i), first_name(fn), last_name(ln), nick_name(nn), phonenumber(pn), darkest_secrect(ds) 
{
	
}

std::string Contact::getFirstName() const
{
	return first_name;
};

std::string Contact::getLastName() const
{
	return last_name;
};
