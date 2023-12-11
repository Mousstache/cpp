/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:28:28 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:35:26 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor called" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Destructor called" << std::endl;
}

void Harl::debug( void ){std::cout << "DEBUG called" << std::endl;}

void Harl::info( void ){std::cout << "INFO called" << std::endl;}
 		
void Harl::warning( void ){std::cout << "WARNING called" << std::endl;}
		
void Harl::error( void ){std::cout << "ERROR called" << std::endl;}

void Harl::complain(std::string level)
{
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; 
	void(Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	int	i = 0;
	
	while (i < 4)
	{
		if (level == str[i])
			(this->*func[i])();
		i++;
	}
}