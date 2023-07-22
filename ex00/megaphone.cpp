/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achansar <achansar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:19:37 by achansar          #+#    #+#             */
/*   Updated: 2023/07/13 15:41:43 by achansar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        int j = 1;
        while (argv[j])
        {
            for (int i = 0; i < strlen(argv[j]); i++)
                std::cout << (char)toupper(argv[j][i]);
            j++;
        }
        std::cout << std::endl;
    }
    return (0);
}