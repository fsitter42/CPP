/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:38:31 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/01 00:25:13 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phonenumber;
	std::string darkest_secrect;

  public:
  	Contact ();
	const std::string& getFirstName() const;
	const std::string& getLastName() const;
	const std::string& getNickName() const;
	const std::string& getPhoneNum() const;
	const std::string& getSecrect() const;
	void setFirstName(const std::string& fn);
	void setLastName(const std::string& ln);
	void setNickName(const std::string& nn);
	void setPhoneNum(const std::string& pn);
	void setSecrect(const std::string& ds);
};

#endif
