/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 00:01:50 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 19:02:22 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap	( void ) : ClapTrap()
{
	this->_name = "Default name";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap :: Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap :: Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	*this = rhs;
	std::cout << this->_name << " :: Copy Constructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		_hitPoint = 100;
		_energyPoint = 50;
		_attackDamage = 20;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap :: Destructor called" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "The ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoint < 1)
	{
		std::cout << "Not enough energy" << std::endl;
		return ;
	}
	if (this->_hitPoint < 1)
	{
		std::cout << this->_name << " is dead" << std::endl;
		return ;
	}
	this->_energyPoint -= 1;
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of dammage !" << std::endl;
}

