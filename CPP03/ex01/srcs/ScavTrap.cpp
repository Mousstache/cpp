/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:14:09 by motroian          #+#    #+#             */
/*   Updated: 2023/11/30 23:52:21 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap	( void ) : _name("Default name"), _hitPoint(100), _energyPoint(100), _attackDamage(30)
{
	std::cout << "ScavTrap :: Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap ( std::string name ) : _name(name), _hitPoint(100), _energyPoint(100), _attackDamage(30)
{
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

void ScavTrap::attack(const std::string& target)
{
	this->_energyPoint -= 1;
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of dammage !" << std::endl;
}
void ScavTrap::takeDamage(unsigned int amount)
{
	this->_energyPoint -= 1;
	this->_hitPoint -= amount;
	std::cout << "ScavTrap" << this->_name << "receive " << amount  << "points of dammage !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->_energyPoint -= 1;
	this->_hitPoint += amount;
	std::cout << "ScavTrap" << this->_name << "receive " << amount  << "points of life !" << std::endl;
}