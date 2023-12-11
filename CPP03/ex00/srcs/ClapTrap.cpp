/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:14:09 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 19:02:34 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap	( void ) : _name("Default name"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap :: Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap :: Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << this->_name << " :: Copy Constructor Called" << std::endl;
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		_hitPoint = 10;
		_energyPoint = 10;
		_attackDamage = 0;
	}
	return (*this);
};

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of dammage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	this->_hitPoint -= amount;
	std::cout << "ClapTrap" << this->_name << "receive " << amount  << " points of dammage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	this->_hitPoint += amount;
	std::cout << "ClapTrap" << this->_name << "receive " << amount  << " points of life !" << std::endl;
}

std::string ClapTrap::getName()
{
	return (this->_name);
}

