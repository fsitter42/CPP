/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:02:13 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/08 13:12:56 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
  private:
      std::string name;
      
  public:
    Zombie();
    Zombie (std::string name);
    ~Zombie (void);
    void announce (void);
    void setName(const std::string& name);
};

#endif