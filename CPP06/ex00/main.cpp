/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:01:58 by motroian          #+#    #+#             */
/*   Updated: 2023/12/19 23:04:22 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

int main (int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Miss arg\n", 1);
	ScalarConvert chef;
	chef.convert(av[1]);
}