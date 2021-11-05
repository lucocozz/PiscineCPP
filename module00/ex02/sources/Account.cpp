/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucocozz <lucocozz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 01:29:34 by lucocozz          #+#    #+#             */
/*   Updated: 2021/11/05 05:55:11 by lucocozz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "account:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts << ";";
	std::cout << "amount: " << initial_deposit << ";";
	std::cout << "created" << std::endl;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount + deposit << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (this->_amount - withdrawal >= 0)
	{
		std::cout << withdrawal << ";";
		std::cout << "amount:" << this->_amount - withdrawal << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		return (true);
	}
	std::cout << "refused" << std::endl;
	return (false);
}

int		Account::checkAmount( void ) const
{
	std::cout << "Check amount" << std::endl;
	return (424242);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	tm		*time_infos;
	time_t	current_time;

	current_time = time(0);
	time_infos = gmtime(&current_time);
	std::cout << "[";
	std::cout << std::setfill('0') << std::setw(4) << time_infos->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << time_infos->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << time_infos->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << time_infos->tm_hour + 1;
	std::cout << std::setfill('0') << std::setw(2) << time_infos->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << time_infos->tm_sec;
	std::cout << "] ";
}
