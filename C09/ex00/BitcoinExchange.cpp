/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:10:15 by achansar          #+#    #+#             */
/*   Updated: 2024/01/31 14:14:55 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// ============================================================================= CONSTRUCTORS

BitcoinExchange::BitcoinExchange() {
	return;
}

BitcoinExchange::BitcoinExchange(const std::string db_file) {
	getDatabase(db_file);
	return;
}

// manque operator copy

BitcoinExchange::~BitcoinExchange() {
	return;
}

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

bool checkDate(int y, int m, int d, const int maxYear) {

	const int minYear = 2009;

	if (y < minYear || y > maxYear || m < 1 || m > 12 || d < 1 || d > 31)
		return false;
	if (m == 2) {
		if (isLeap(y)) { return (d <= 29); } else { return (d <= 28); }
	}
	if (m == 4 || m == 6 || m == 9 || m == 11) {
		return (d <= 30);
	}
	return true;
}

bool isValidDate(const std::string& dateString, const int maxYear) {

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

	return checkDate(array[0], array[1], array[2], maxYear);
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

void BitcoinExchange::getBtcValue(std::string date, std::string v, std::string line) {

	for (std::string::iterator strit = v.begin(); strit != v.end(); strit++) {
		if (!isdigit(*strit) && *strit != '.' && *strit != '-') {
			std::cout << "Error: bad input => " << line << std::endl;
			return;
		}	
	}

	double btc = std::stod(v);

	if (btc < 0) { std::cout << "Error: not a positive number." << std::endl; }
	else if ( btc > INT_MAX) { std::cout << "Error: too large a number." << std::endl; }
	else {
		double rate = convertRate(date, btc);
		std::cout << date << " => " << btc * rate << std::endl;
	}
	return;
}

bool BitcoinExchange::convertInput(char *input) {
	
    const int maxYear = getCurrentYear();

    std::ifstream inf(input);// -> protect ?
    std::string line;
	std::string date;
	std::string value;
	std::string separator = " | ";

	std::getline(inf, line);
	if (line.compare("date | value"))
		throw WrongInputException();

	while (std::getline(inf, line)){
		std::size_t pos = line.find(separator);
		if (pos != 10 || !line[pos + 3])
			std::cout << "Error: bad input => " << line << std::endl;
		else {
			date = line.substr(0, 10);
			value = line.substr(pos + 3);
			// std::cout << "key : " << date << " | value : " << value << std::endl;
			getBtcValue(date, value, line);
		} 
	}
	return true;
}

void BitcoinExchange::getDatabase(const std::string db_file) {
	
	std::ifstream inf(db_file);//       faut il parser le nom, verifier l'extension/l'existence ?
	std::string temp;

	std::string key;
	double value;

	std::getline(inf, temp);// check prmiere ligne

	while (std::getline(inf, temp)) {
		key = temp.substr(0, 10);
		value = std::stod(temp.substr(11));
		// if (isValidDate(key, 2009))//                 remplacer par minYear
		// 	throw WrongDatabaseException();
		// if (value < 0 || value > INT_MAX)//           quel max ?
		// 	throw WrongDatabaseException();
		_data[key] = value;
	}	
	return;
}

