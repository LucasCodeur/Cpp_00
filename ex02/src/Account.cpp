/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:37:54 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/05 15:11:00 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "created\n";
}

 Account::~Account( void ) {

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed\n";
}

void	Account::makeDeposit( int deposit )
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "p_amount:" << this->_amount << ";"; 
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << ++this->_nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	amount;

	amount = this->checkAmount();
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"; 
	std::cout << "p_amount:" << this->_amount << ";"; 
	if (amount < withdrawal)
	{
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";"; 
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals << "\n";
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp( void )
{
	time_t timestamp;
	char	buffer[20];

	time(&timestamp);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", std::localtime(&timestamp));
	std::cout << buffer << " ";
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	std::cout << "total:"; 
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	std::cout << "deposits:"; 
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	std::cout << "withdrawals:"; 
	return (Account::_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << Account::getTotalAmount() << ";";
	std::cout << Account::getNbDeposits() << ";";
	std::cout << Account::getNbWithdrawals() << "\n";
}
