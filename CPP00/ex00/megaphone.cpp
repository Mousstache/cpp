/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 23:26:43 by motroian          #+#    #+#             */
/*   Updated: 2023/11/24 17:36:46 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string> 
#include <clocale>

int main (int ac, char **av)
{
    if (ac > 1)
    {
        std::locale loc;
        for (int i = 1; i < ac; ++i)
        {
            int j = 0;
            while (av[i][j])
            {
                std::cout << std::toupper(av[i][j], loc);
                j++;
            }
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
