/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 20:12:39 by achansar          #+#    #+#             */
/*   Updated: 2024/02/08 18:09:02 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ========================================================== CONSTRUCTORS

// ========================================================== MEMBER FUNCTION

bool hasComa(std::string input) {
    int c = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '.')
            c++;
    }
    return (c > 1);
}

bool isChar(std::string l) {
    
    if (l.size() == 1 && ((l.at(0) > 31 && l.at(0) < 48) || (l.at(0) > 57 && l.at(0) < 127)))
        return true;
    return false;
}

bool isInt(std::string l) {
    int i = 0;
    if (l[i] == '-')
        i++;

    while (i < l.size()) {
        if (!isdigit(l[i]))
            return false;
        i++;
    }
    return true;
}


bool isFloat(std::string l) {

    bool dec = false;
    int i = 0;
    if (l[i] == '-')
        i++;
        
    if (l == "nanf" || l == "+inff" || l == "-inff")
        return true;
    while (i < l.size() - 1) {
        if ((!isdigit(l[i]) && l[i] != '.' ) || (l[i] == '.' && dec) ||l.back() != 'f')
            return false;
        else if (l[i] == '.' && !dec)
            dec = true;
        i++;
    }
    return true;
}

bool isDouble(std::string l) {

    bool dec = false;
    int i = 0;
    if (l[i] == '-')
        i++;
    
    if (l == "nan" || l == "+inf" || l == "-inf")
        return true;
    while (i < l.size() - 1) {
        if ((!isdigit(l[i]) && l[i] != '.' ) || (l[i] == '.' && dec) || l.back() == 'f')
            return false;
        else if (l[i] == '.' && !dec)
            dec = true;
        i++;
    }
    return true;
}

static bool LitToChar(std::string literal) {
    
    if (isChar(literal)) {
        // std::cout << "Using char convert" << std::endl;
        char l_char = static_cast<char>(literal[0]);

        std::cout << "char: '" << l_char << "'" << std::endl;
        
        int l_int = static_cast<int>(l_char);
        std::cout << "int: " << l_int << std::endl;
        
        float l_f = static_cast<float>(l_char);
        std::cout << "float : " << l_f << ".0f" << std::endl;

        double l_d = static_cast<double>(l_char);
        std::cout << "double : " << l_d << ".0" << std::endl;
        return true;
    }
    return false;
}

static bool LitToInt(std::string literal) {

    if (isInt(literal)) {
        // std::cout << "Using int convert" << std::endl;

        int l_int = std::stoi(literal);

        char l_char = static_cast<char>(l_int);
        try {
            if (l_char >= 32 && l_char <= 126)
                std::cout << "char : '" << l_char << "'" << std::endl;
            else
                throw ScalarConverter::NonDisplayableException();
        } catch (const std::exception& e) {
            std::cout << "char : " << e.what() << std::endl;
        }

        std::cout << "int: " << l_int << std::endl;
        
        float l_f = static_cast<float>(l_int);
        std::cout << "float : " << l_f << ".0f" << std::endl;

        int l_d = static_cast<double>(l_int);
        std::cout << "double : " << l_d << ".0" << std::endl;
        return true;
    }
    return false;
}

static bool LitToFloat(std::string literal) {

    if (isFloat(literal)) {
    // std::cout << "Using float convert" << std::endl;
        float l_f = std::stof(literal);
        
        if (literal == "nanf" || literal == "+inff" || literal == "-inff") {
            std::cout   << "char: impossible\nint: impossible" << std::endl;
        } else {
            char l_char = static_cast<char>(l_f);
            try {
                if (l_char >= 32 && l_char <= 126)
                    std::cout << "char: '" << l_char << "'" << std::endl;
                else
                    throw ScalarConverter::NonDisplayableException();
            } catch (const std::exception& e) {
                std::cout << "char : " << e.what() << std::endl;
            }
            
            int l_int = static_cast<int>(l_f);
            std::cout << "int: " << l_int << std::endl;
        }

        std::cout << "float : " << literal << std::endl;

        double l_d = static_cast<double>(l_f);
        std::cout << "double : " << l_d << std::endl;
        return true;
    }
    return false;
}

static bool LitToDouble(std::string literal) {

    if (isDouble(literal)) {
        // std::cout << "Using double convert" << std::endl;

        bool dec = false;
        double l_d = std::stod(literal);

        int i = 0;
        while (literal[i]) {
            if (literal[i] == '.')
                break;
            i++;
        }

        if (literal[i] == '.') {
            while (literal[i]) {
                if (literal[i] >= 49 && literal[i] <= 57) {
                    dec = true;
                    break;
                }
                i++;
            }
        }

        if (literal == "nan" || literal == "+inf" || literal == "-inf") {
            std::cout   << "char: impossible\nint: impossible" << std::endl;
        } else {
            char l_char = static_cast<char>(l_d);
            try {
                if (l_char >= 32 && l_char <= 126)
                    std::cout << "char: '" << l_char << "'" << std::endl;
                else
                    throw ScalarConverter::NonDisplayableException();
            } catch (const std::exception& e) {
                std::cout << "char : " << e.what() << std::endl;
            }
            
            int l_int = static_cast<int>(l_d);
            std::cout << "int: " << l_int << std::endl;
        }
        float l_f = static_cast<float>(l_d);
        size_t pos = literal.find('.');
        if (dec || literal == "nan" || literal == "+inf" || literal == "-inf") {
            std::cout << "float : " << l_f << "f" << std::endl;
        }
        else {
            std::cout << "float : " << l_f << ".0f" << std::endl;
        }

        std::cout << "double : " << literal << std::endl;

        return true;
    }
    return false;
}

void ScalarConverter::convert(std::string literal) {

    if (hasComa(literal))
        throw ScalarConverter::WrongTypeException();
    if (LitToInt(literal))
        return;
    if (LitToChar(literal))
        return;
    else if (LitToFloat(literal))
        return;
    else if (LitToDouble(literal))
        return;
    else
        throw ScalarConverter::WrongTypeException();
    return;
}
