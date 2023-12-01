/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:44:55 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 21:24:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap	( void ) : ClapTrap()
{
	this->_name = "Default name";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap :: Default Constructor Called" << std::endl;
}

FragTrap::FragTrap ( std::string name ) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << this->_name << " :: Copy Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
	*this = rhs;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	(void)rhs;
	return (*this);
};

void FragTrap::attack(const std::string& target)
{
	if (!good())
		return ();
	this->_energyPoint -= 1;
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of dammage !" << std::endl;
}

void FragTrap::getInfo()
{
	std::cout << "energy : " << this->_energyPoint << std::endl;
	std::cout << "hp : " << this->_hitPoint << std::endl;
	std::cout << "damage : " << this->_attackDamage << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " give me Five !" << std::endl;
}