/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a600 <a600@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:36:54 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/05 23:45:45 by a600             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <sys/time.h>
#include <iostream>

void Account::_displayTimestamp(void)
{
	struct timeval  tv;
    struct tm       *tm;
    char            buf[20];

    gettimeofday(&tv, NULL);
    tm = localtime(&tv.tv_sec);
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", tm);
    std::cout << "[" << buf << "] ";
}

Account::Account( int initial_deposit )
{
	Account::_accountIndex = _nbAccounts;
	Account::_amount = initial_deposit;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << "\n";
	//[19920104_091532] index:0;amount:42;created
}

Account::~Account( void )
{}

int main()
{
	Account aa(1);
}
