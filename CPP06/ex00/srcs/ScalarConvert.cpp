/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:02:01 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:21:26 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"

ScalarConvert::ScalarConvert()
{}

ScalarConvert::~ScalarConvert()
{}


void ScalarConvert::convert(std::string input)
{
	if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" <<std::endl;
		std::cout << "int: impossible" <<std::endl;
		std::cout << "float: -inff" <<std::endl;
		std::cout << "double: -inf" <<std::endl;
		return ;
	}
	else if (input == "+inf" || input == "+inff") 
	{
		std::cout << "char: impossible" <<std::endl;
		std::cout << "int: impossible" <<std::endl;
		std::cout << "float: +inff" <<std::endl;
		std::cout << "double: +inf" <<std::endl;
		return ;

	}
	else if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" <<std::endl;
		std::cout << "int: impossible" <<std::endl;
		std::cout << "float: nanf" <<std::endl;
		std::cout << "double: nan" <<std::endl;
		return ;

	}
	double d;
	char *pEnd;

	
	d = strtod(input.c_str(), &pEnd);
	 if (errno == ERANGE){
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }

	if (*pEnd == '\0' || *pEnd == 'f')
	{
		if (d > CHAR_MAX || d < CHAR_MIN)
		{
			std::cout << "char: impossible" << std::endl;
		}
		else if (d < 32 || d == 127)
		{
            std::cout << "char: Non displayable" << std::endl;
		}
		else
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		


		if (d < INT_MIN || d > INT_MAX)
		{
			std::cout << "int: impossible" << std::endl;
		}
		else
		{
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		}


		if (d > FLT_MAX || d < -FLT_MAX)
		{
			std::cout << "float: impossible" << std::endl;
		}
		else	
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << std::setprecision(1) << "f" << std::endl;
		}

		std::cout << "double: " << std::fixed << std::setprecision(1) << d <<  std::endl;
	}
	else
	{
		if (d == 0.0 && input.size() == 1)
			std::cout << "char: " << input << std::endl;
		else
			std::cout << "char: impossible" <<std::endl;
		std::cout << "int: impossible" <<std::endl;
		std::cout << "float: impossible" <<std::endl;
		std::cout << "double: impossible" <<std::endl;
	}
}
