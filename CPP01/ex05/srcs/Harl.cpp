/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:28:28 by motroian          #+#    #+#             */
/*   Updated: 2023/11/22 23:53:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){std::cout << "debug" << std::endl;}

void Harl::info( void ){std::cout << "info" << std::endl;}
 		
void Harl::warning( void ){std::cout << "warning" << std::endl;}
		
void Harl::error( void ){std::cout << "error" << std::endl;}

void Harl::complain(std::string level)
{
	std::string str[4] = {"debug", "info", "warning", "error"}; 
	void(Harl::*func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	int	i = 0;
	
	while (i < 4)
	{
		if (level == str[i])
			(this->*func[i])();
		i++;
	}
}