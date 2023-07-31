/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:52:43 by achansar          #+#    #+#             */
/*   Updated: 2023/07/31 19:01:45 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int msg_error(std::string str) {
    
    std::cout << str << std::endl;
    return 1;
}

void    replace(std::string& line, std::string old_s, std::string new_s) {

    size_t pos = line.find(old_s);
    
    while (pos!=std::string::npos) {

        line.erase(pos, old_s.size());
        line.insert(pos, new_s);
        pos = line.find(old_s, pos + new_s.size());
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
