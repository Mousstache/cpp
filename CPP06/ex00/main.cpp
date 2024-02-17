/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:01:58 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:25:19 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <iostream>
#include <sstream>

int main (int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Miss arg\n", 1);
	ScalarConvert::convert(av[1]);
}