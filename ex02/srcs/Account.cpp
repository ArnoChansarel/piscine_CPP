/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:59:47 by achansar          #+#    #+#             */
/*   Updated: 2023/07/24 18:30:44 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//   -------------------CONSTRUCT--------------------------------------------------------

	Account::Account( int initial_deposit ) {
        
        static int i = 0;
    
        this->_accountIndex = i;
        this->_amount = initial_deposit;
        this->_nbDeposits = 0;
        this->_nbWithdrawals = 0;
        this->_displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                    << "amount:" << this->_amount << ";"
                    << "created" << std::endl;
        if (this->_accountIndex == 7)
            std::cout << std::endl;
        i++;
        
        Account::_nbAccounts++;
        Account::_totalAmount += this->_amount;
        return;
    }

    Account::~Account( void ) {
        
        _displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                    << "amount" << this->_amount << ";"
                    << "closed" << std::endl;
        return;
    }

// ---------------------FUNCTIONS--------------------------------------------------------

	void	Account::makeDeposit( int deposit ) {
        
        _displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                    << "p_amount:" << this->_amount << ";"
                    << "deposit:" << deposit << ";";
        this->_amount += deposit;
        this->_nbDeposits++;
        std::cout   << "amount:" << this->_amount 
                    << ";nb_deposits:" << this->_nbDeposits << std::endl;
        Account::_totalNbDeposits++;
        Account::_totalAmount += deposit;
        if (this->_accountIndex == 7)
            std::cout << std::endl;
        return;
    }

    bool	Account::makeWithdrawal( int withdrawal ) {
        
        _displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                    << "p_amount:" << this->_amount << ";"
                    << "withdrawal:";
        if (withdrawal > this->_amount)
            std::cout << "refused" << std::endl;
        else {
            this->_amount -= withdrawal;
            this->_nbWithdrawals++;
            std::cout   << withdrawal << ";"
                        << "amount" << this->_amount << ";"
                        << "nb_withdrawals:" << this->_nbDeposits << std::endl;
            Account::_totalNbWithdrawals++;
            Account::_totalAmount -= withdrawal;
        }
        if (this->_accountIndex == 7)
            std::cout << std::endl;
        return 1;
    }

    void	Account::_displayTimestamp( void ) {
        time_t current = time(&current);

        char timeStamp[16];
        std::strftime(timeStamp, sizeof(timeStamp), "%Y%m%d_%H%M%S", std::localtime(&current));
        std::cout << "[" << timeStamp << "] ";
        return;
    }

    void	Account::displayStatus( void ) const {
        
        _displayTimestamp();
        std::cout   << "index:" << this->_accountIndex << ";"
                    << "amount:" << this->_amount << ";"
                    << "deposits:" << this->_nbDeposits << ";"
                    << "withdrawals:" << this->_nbWithdrawals << std::endl;
        if (this->_accountIndex == 7)
            std::cout << std::endl;
    }

    void	Account::displayAccountsInfos( void ) {
        
        _displayTimestamp();
        std::cout   << "accounts:" << getNbAccounts() << ";"
                    << "total:" << getTotalAmount() << ";"
                    << "deposits:" << getNbDeposits() << ";"
                    << "withdrawals:" << getNbWithdrawals() << std::endl
                    << std::endl;
    }

// ---------------------GETTERS--------------------------------------------------------

	int Account::getNbAccounts( void ) {
        return Account::_nbAccounts; 
    }
    
    int	Account::getTotalAmount( void ){
        return Account::_totalAmount;
    }
    
	int	Account::getNbDeposits( void ) {
        return Account::_totalNbDeposits;
    }

	int	Account::getNbWithdrawals( void ) {
        return Account::_totalNbWithdrawals;
    }
