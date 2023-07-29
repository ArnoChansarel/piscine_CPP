/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:16:20 by achansar          #+#    #+#             */
/*   Updated: 2023/07/28 19:46:24 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {

    Harl harl;

    harl.complain("WARNING");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("ERROR");
    harl.complain("error");
    harl.complain("999999999999999999999999999999");
    harl.complain("op");
    return 0;
}
