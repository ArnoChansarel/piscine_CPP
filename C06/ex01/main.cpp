/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:38:19 by achansar          #+#    #+#             */
/*   Updated: 2024/01/09 17:09:08 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void printStruct(Data* data) {
    std::cout   << "Nb = " << data->nb << std::endl
                << "String = " << data->t << std::endl;
    return;
}

int main() {

    Data* stc = new Data();
    stc->nb = 18;
    stc->t = "Hello les amis";
    printStruct(stc);

    uintptr_t unptr = Serializer::serialize(stc);

    std::cout << unptr << std::endl;

    stc = Serializer::deserialize(unptr);
    printStruct(stc);
    return 0;
}
