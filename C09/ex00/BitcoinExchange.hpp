/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:55:10 by achansar          #+#    #+#             */
/*   Updated: 2024/02/01 15:43:51 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <map>

class BitcoinExchange {
    
    public:
        BitcoinExchange(const std::string db_file);
        BitcoinExchange(const BitcoinExchange& src);
        BitcoinExchange& operator=(const BitcoinExchange& src);
        ~BitcoinExchange();

        class WrongInputException : public std::exception {     
            
            const char* what() const throw() {
                return "Error: Wrong Input Format.";
            }
        };

        class FileOpeningException : public std::exception {     
            
            const char* what() const throw() {
                return "Error: could not open file.";
            }
        };

        class WrongDatabaseException : public std::exception {     
    
            const char* what() const throw() {
                return "Error: Wrong Database format";
            }
        };

        bool        convertInput(char *input);
        void        getDatabase(const std::string db_file);
        void        getBtcValue(std::string date, std::string btc, std::string line);
        double      convertRate(std::string date, double btc);
        double      convertValue(std::string v, std::string line);

    private:
        BitcoinExchange();
        std::map<std::string, double>   _data;
        int                             _maxYear;
};
