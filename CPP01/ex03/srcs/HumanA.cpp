/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:08:48 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:12:29 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon): _name(name), _weapon(weapon) 
{
	std::cout << "constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "destructor called" << std::endl;
}

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << getWeapon().getType() << std::endl;
}