/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:59:47 by achansar          #+#    #+#             */
/*   Updated: 2023/07/22 18:39:43 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

//   -------------------CONSTRUCT

	Account::Account( int initial_deposit ) {
        
        static int i = 0;
        // display timestamp and info
        this->_accountIndex = i;
        this->_amount = initial_deposit;
        this->_nbDeposits = 0;
        this->_nbWithdrawals = 0;
        std::cout << "account = " << this->_amount << std::endl;
        i++;
        return;
    }
	
    Account::~Account( void ) {
        
        // display timestamp and info
        return;
    }



// ---------------------FUNCTIONS

	void	Account::makeDeposit( int deposit ) {

        this->_amount += deposit;
        std::cout << "account = " << this->_amount << std::endl;
        return;
    }

	// int Account::getNbAccounts( void ) {
    //     return _nbAccounts; 
    // }
    
    // int	Account::getTotalAmount( void ){
    //     return _totalAmount;
    // }
    
	// int	Account::getNbDeposits( void ) {
    //     return _totalNbDeposits;
    // }
    
	// int	Account::getNbWithdrawals( void ) {
    //     return _totalNbWithdrawals;
    // }
    
	// void Account::displayAccountsInfos( void );