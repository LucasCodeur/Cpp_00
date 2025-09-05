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

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    // _accountIndex peut être initialisé ici (par exemple avec _nbAccounts++)
    // et _nbAccounts doit être incrémenté aussi si tu le gères
}

 Account::~Account( void ) {

}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	std::cout << "deposit:" << deposit;
}


bool	Account::makeWithdrawal( int withdrawal )
{
	int	amount;

	amount = this->checkAmount();
	if (amount < withdrawal)
	{
		std::cout << "withdrawal:refused";
		return (false);
	}
	this->_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal; 
	return (true);
}

int		Account::checkAmount( void ) const
{
	int		amount;
	amount = this->_amount;
	std::cout << "amount:" << amount;
	return (amount);
}

/*int		Account::getAmount( void )*/
/*{*/
/*	return (this->_amount);*/
/*}*/
/*int		Account::get(const std::string&field)*/
/*{*/
	/*if (field == "_nbAccounts")*/
	/*	return (this->_nbAccounts);*/
	/*else if (field == "_totalAmount")*/
	/*	return (this->_totalAmount);*/
	/*else if (field == "_totalNbDeposits")*/
	/*	return (this->_totalNbDeposits);*/
	/*else if (field == "_totalNbWithdrawals")*/
	/*	return (this->_totalNbWithdrawals);*/
	/*else if (field == "_accountIndex")*/
	/*	return (this->_accountIndex);*/
	/*if (field == "_amount")*/
	/*else if (field == "_nbDeposits")*/
	/*	return (this->_nbDeposits);*/
	/*else if (field == "_nbWithdrawals")*/
	/*	return (this->_nbWithdrawals);*/
	/*return (0);*/
/*}*/

/*size_t	Account::get_index()*/
/*{*/
/*	return (this->index);*/
/*}*/
