/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:02:01 by motroian          #+#    #+#             */
/*   Updated: 2023/12/20 21:03:43 by motroian         ###   ########.fr       */
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

bool isFloat(std::string input)
{
	int i = -1;
	while (input[++i])
	{
		if (input[i] == '.')
		{
			while (input[i++])
			{
				if (input[i] == 'f')
					return (true);
			}
		}
	}
	return (false);
}

bool parsing(std::string input)
{
	int i = -1;
	while (input[++i])
	{
		if ((input[i] < '0' && input[i] > '9') || (input[i] != 'f' || input[i] != '.'))
			return (1);
	}
	return (0);
}



void ScalarConvert::convert(std::string input)
{
	if (!parsing(input))
	{
		std::cout << "soucy" << std::endl;
		return ;
	}
	char c;
	int i;
	float f;
	double d;
	std::stringstream chaine;
	std::stringstream entier;
	std::stringstream flottant;
	std::stringstream doublant;
	entier << input;
	flottant << input;
	doublant << input;
	chaine << input;
	entier >> i;
	flottant >> f;
	doublant >> d;
	chaine >> c;
	std::cout << c << std::endl;
	std::cout << i << std::endl;
	// if (isFloat(input))
		std::cout << f << ".0f" << std::endl;
	// else
		// std::cout << f << "f" << std::endl;
	std::cout << d << ".0" << std::endl;
}
