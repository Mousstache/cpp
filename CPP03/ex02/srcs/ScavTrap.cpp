/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 00:01:50 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 20:33:29 by motroian         ###   ########.fr       */
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
	std::cout << this->_name << " :: Copy Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	*this = rhs;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	(void)rhs;
	return (*this);
};

void ScavTrap::guardGate()
{
	std::cout << "The ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	this->_energyPoint -= 1;
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of dammage !" << std::endl;
}

void ScavTrap::getInfo()
{
	std::cout << "energy : " << this->_energyPoint << std::endl;
	std::cout << "hp : " << this->_hitPoint << std::endl;
	std::cout << "damage : " << this->_attackDamage << std::endl;
}