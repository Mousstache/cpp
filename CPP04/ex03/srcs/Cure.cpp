/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:15 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 23:41:04 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_Type = "cure";
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(std::string name) : Animal(name)
{
	(void)name;
	this->_Type = "cure";
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure &rhs)
{
	*this = rhs;
}

Cure &Cure::operator=(const Cure &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure : " << "* heals <" << target.getName() << "'s wounds *" << std::endl; 
}

void Ice::clone() const
{
	return (new cure());
}