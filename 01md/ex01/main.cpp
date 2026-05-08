/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:02:02 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/08 13:25:35 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main (void)
{
    int n = 5;
    Zombie *a = zombieHorde(n, "josi");
    for (int i = 0; i < n; i++)
        a[i].announce();
    delete[] a;
}
