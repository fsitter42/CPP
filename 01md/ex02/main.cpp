/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsitter <fsitter@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 13:02:02 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/08 13:39:07 by fsitter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main (void)
{
    std::string s = "HI THIS IS BRAIN";
    std::cout << &s << "\n";

    
    std::string* ptr  = &s;
    std::cout << ptr << "\n";

    
    std::string& ref = s;
    std::cout << &ref << "\n";


    std::cout << s << "\n";
    std::cout << *ptr << "\n";
    std::cout << ref << "\n";
}
