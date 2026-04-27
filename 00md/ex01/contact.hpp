/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:38:31 by fsitter           #+#    #+#             */
/*   Updated: 2026/04/27 15:36:26 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cctype>
#include <iostream>

class Contact
{
  private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phonenumber;
	std::string darkest_secrect;

  public:
  	Contact (int i, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	std::string getFirstName() const;
	
};

#endif
