/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:02:01 by motroian          #+#    #+#             */
/*   Updated: 2023/12/19 23:06:31 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert()
{
}

ScalarConvert::~ScalarConvert()
{
}

ScalarConvert::ScalarConvert(const ScalarConvert &rhs)
{
	*this = rhs;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &rhs)
{
	(void)rhs;
	return (*this);
}

void ScalarConvert::convert(std::string input)
{
	int i;
	float f;
	std::stringstream entier;
	std::stringstream moha;
	entier << input;
	moha << input;
	entier >> i;
	moha >> f;
	std::cout << i << std::endl;
	std::cout << f << std::endl;
}
