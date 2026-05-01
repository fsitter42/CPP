/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:39:11 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 13:53:41 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact() {}

const std::string& Contact::getFirstName() const
{
	return first_name;
}

const std::string& Contact::getLastName() const
{
	return last_name;
}

const std::string& Contact::getNickName() const
{
	return nick_name;
}

const std::string& Contact::getPhoneNum() const
{
	return phonenumber;
}

const std::string& Contact::getSecrect() const
{
	return darkest_secrect;
}

void Contact::setFirstName(const std::string& fn)
{
	first_name = fn;
}
void Contact::setLastName(const std::string& ln)
{
	last_name = ln;
}
void Contact::setNickName(const std::string& nn)
{
	nick_name = nn;
}
void Contact::setPhoneNum(const std::string& pn)
{
	phonenumber = pn;
}
void Contact::setSecrect(const std::string& ds)
{
	darkest_secrect = ds;
}
