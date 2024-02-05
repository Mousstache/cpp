/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:08:04 by motroian          #+#    #+#             */
/*   Updated: 2024/01/25 23:48:41 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Constructor called" << std::endl; 
}

Weapon::~Weapon()
{
	std::cout << "Destructor called" << std::endl; 
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string Weapon::getType()
{
	if (this->_type.empty())
		return ("no type definition !");
	return (this->_type);
}