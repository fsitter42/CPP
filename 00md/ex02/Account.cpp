/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a600 <a600@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:36:54 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/05 23:56:49 by a600             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <sys/time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";created\n";
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";closed\n";
}

int main()
{
	Account aa(1);
}
