/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a600 <a600@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:36:54 by fsitter           #+#    #+#             */
/*   Updated: 2026/05/06 11:42:03 by a600             ###   ########.fr       */
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

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:";
	std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << p_amount << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:";
	std::cout << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (_amount >= withdrawal)
	{
		int p_amount = _amount;
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:";
		std::cout << p_amount << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:";
		std::cout << _nbWithdrawals << "\n";
		return true;
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:";
	std::cout << _amount << ";withdrawal:refused\n";
	return (false);
}


int main()
{
	Account aa(100);
	Account::displayAccountsInfos();
	aa.makeDeposit(600);
	aa.makeWithdrawal(2000);
	aa.makeWithdrawal(200);
}
