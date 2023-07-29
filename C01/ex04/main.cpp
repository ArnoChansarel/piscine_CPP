/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:52:43 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 20:45:14 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int msg_error(std::string str) {
    
    std::cout << str << std::endl;
    return 1;
}

void    replace(std::string& line, std::string old_s, std::string new_s) {

    size_t size_o = old_s.length();
    
    for (size_t i = 0; i < line.length(); i++) {

        if (line.compare(i, size_o, old_s) == 0) {
            line.erase(i, size_o);
            line.insert(i, new_s);
        }
    }
    return;
}

int main(int argc, char **argv) {

    std::ifstream finput;
    std::ofstream foutput;
    std::string outputName;

    if (argc != 4) {
        return(msg_error("Wrong number of arguments."));
    } else {
        outputName = argv[1];
        std::string isEmpty = argv[2];
        if (isEmpty.empty())
            return(msg_error("Invalid argument."));
    }
    finput.open(argv[1], std::fstream::in);
    if (finput.fail())
        return(msg_error("Open failed."));
    foutput.open(outputName.append(".replace"), std::fstream::out);
    if (finput.fail()) {
        finput.close();
        return(msg_error("Open failed."));
    }

    for (std::string line ; std::getline(finput, line) ; ) {
        replace(line, argv[2], argv[3]);
        foutput << line << std::endl;
    }

    finput.close();
    foutput.close();
    return 0;
}
