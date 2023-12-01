/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:14:09 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 21:41:50 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ClapTrap::ClapTrap	( void ) :  _name("default name"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap :: Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap ( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << this->_name << " :: Copy Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	(void)rhs;
	return (*this);
};

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " receive " << amount  << ", points of dammage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoint -= 1;
	this->_hitPoint += amount;
	std::cout << "ClapTrap" << this->_name << "receive " << amount  << "points of life !" << std::endl;
}

bool ClapTrap::good()
{
	if (this->_hitPoint < 1)
		return (false);
	else if (this->_energyPoint < 1)
		return (false);
	else
		return (true);
}