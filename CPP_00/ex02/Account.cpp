/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:39:26 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/09/18 17:13:48 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int Account::checkAmount(void) const
{
	return (Account::_amount);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() \
		<< ";total:" << Account::getTotalAmount() \
		<< ";deposits:" << Account::getNbDeposits() \
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";amount:" << this->checkAmount() \
		<< ";deposits:" << this->_nbDeposits \
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";p_amount:" << this->_amount \
		<< ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount \
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex \
		<< ";p_amount:" << this->_amount \
		<< ";withdrawal:";
	if (withdrawal > this->checkAmount())
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" \
		<< this->checkAmount() - withdrawal \
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	return (true);
}

void	Account::_displayTimestamp(void)
{
	time_t	timenow;

	timenow = time(NULL);
	std::cout << std::put_time(localtime(&timenow), "[%Y%m%d_%H%M%S] ");
}