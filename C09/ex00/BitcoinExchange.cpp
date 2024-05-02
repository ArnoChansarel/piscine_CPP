/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:10:15 by achansar          #+#    #+#             */
/*   Updated: 2024/05/02 17:42:09 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// ============================================================================= PARSING

int getCurrentYear() {//          recheck after gpt
    time_t rawtime;
    struct tm* timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    return 1900 + timeinfo->tm_year;
}

bool isLeap(int y) 
{ 
	return (((y % 4 == 0) &&  
		 (y % 100 != 0)) || 
		 (y % 400 == 0)); 
}

bool BitcoinExchange::checkDate(int y, int m, int d, const int maxYear, bool isDatabase) {

	if (!isDatabase) {
		std::string minDate = _data.begin()->first;

		int i = 0, j = 0;
		std::string temp;
		int array[3] = {};

		while (minDate[i]) {
			if (minDate[i] != '-') {
				temp += minDate[i];
			} else {
				array[j] = std::stoi(temp);
				temp.clear();
				j++;
			}
			i++;
		}
		array[j] = std::stoi(temp);

		if (y < array[0] || m < array[1] || d < array[2]) {
			return false;
		}
	}

	if (y < 2009 || y > maxYear || m < 1 || m > 12 || d < 1 || d > 31)
		return false;
	if (m == 2) {
		if (isLeap(y)) { return (d <= 29); } else { return (d <= 28); }
	}
	if (m == 4 || m == 6 || m == 9 || m == 11) {
		return (d <= 30);
	}
	
	return true;
}

bool BitcoinExchange::isValidDate(const std::string& dateString, const int maxYear, bool isDatabase) {

	int i = 0, j = 0;
	std::string temp;
	int array[3] = {};

	while (dateString[i]) {
		if (dateString[i] != '-') {
			temp += dateString[i];
		} else {
			array[j] = std::stoi(temp);
			temp.clear();
			j++;
		}
		i++;
	}
	array[j] = std::stoi(temp);

	return checkDate(array[0], array[1], array[2], maxYear, isDatabase);
}

// ============================================================================= CONSTRUCTORS

BitcoinExchange::BitcoinExchange() {
	return;
}

BitcoinExchange::BitcoinExchange(const std::string db_file) {
	_maxYear = getCurrentYear();
	getDatabase(db_file);
	return;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) {
	*this = src;
	return;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
	_data = src._data;
	_maxYear = src._maxYear;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {
	return;
}

// ============================================================================= MEMBER FUNCTIONS

double BitcoinExchange::convertRate(std::string date, double btc) {
	
	std::map<std::string, double>::iterator it;
	
	for (it = _data.begin() ; it != _data.end() ; it++) {

		if (!date.compare(it->first)) {
			return it->second;
		} else if (it->first >= _data.lower_bound(date)->first) {
			return (--it)->second;
		}
	}
	return 0.0;
}

double BitcoinExchange::convertValue(std::string v, std::string line) {
	
	for (std::string::iterator strit = v.begin(); strit != v.end(); strit++) {
		if (!isdigit(*strit) && *strit != '.' && *strit != '-') {
			std::cout << "Error: bad input => " << line << std::endl;
			return -1;
		}
	}
	double btc = std::stod(v);
	if (btc < 0) { std::cout << "Error: not a positive number." << std::endl; return -1;}
	else if ( btc > INT_MAX) { std::cout << "Error: too large a number." << std::endl; return -1;}
	else
		return btc;
}

void BitcoinExchange::getBtcValue(std::string date, std::string v, std::string line) {

	double btc = convertValue(v, line);
	

	if (btc < 0)
		return;
	else {
		
		double rate = convertRate(date, btc);
		
		
		std::cout << date << " => " << v << " = " << btc * rate << std::endl;
	}
	return;
}

bool BitcoinExchange::convertInput(char *input) {
	
    const int maxYear = getCurrentYear();

    std::ifstream inf(input);
    std::string line;
	std::string date;
	std::string value;
	std::string separator = " | ";

	if (inf.is_open()) {
		std::getline(inf, line);
		if (line.compare("date | value"))
			throw WrongInputException();

	
		while (std::getline(inf, line)){
			std::size_t pos = line.find(separator);
			
			if (pos != 10 || !line[pos + separator.length()])
				std::cout << "Error: bad input => " << line << std::endl;
			else {
				date = line.substr(0, 10);
				value = line.substr(pos + separator.length());
			
				try {
					if (!isValidDate(date, _maxYear, false)) {
						std::cout << "Error: bad input => " << line << std::endl;
					
					}
					else {
					
						getBtcValue(date, value, line);
						
					}
				} catch(const std::exception& e) {
					std::cerr << e.what() << std::endl;
				}
			} 
		}
	} else {
		throw FileOpeningException();
	}
	return true;
}

void BitcoinExchange::getDatabase(const std::string db_file) {
	
	std::ifstream inf(db_file);
	std::string line;
	std::string key;
	double value;
	std::string s = ",";

	if (inf.is_open()) {
		std::getline(inf, line);
		if (!s.compare("date,exchange_rate")) {
			// std::cout << "OUT1\n";
			throw WrongDatabaseException();
		}

		while (std::getline(inf, line)) {
			std::size_t pos = line.find(s);
			if (pos != 10 || !line[pos + s.length()]) {
				// std::cout << "OUT2\n";
				throw WrongDatabaseException();
			}
			else {
				key = line.substr(0, 10);
				value = std::stod(line.substr(11));
				if (!isValidDate(key, _maxYear, true)) {
					// std::cout << "OUT3 on : " << key << " | " << value << " | while maxYear is " << _maxYear << std::endl;
					throw WrongDatabaseException();
				}
				if (value < 0 || value > INT_MAX) {
					// std::cout << "OUT4\n";
					throw WrongDatabaseException();
				}
				_data[key] = value;
			}
		}
	} else {
		throw FileOpeningException();
	}
	return;
}
