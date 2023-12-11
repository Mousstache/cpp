/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:40 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 23:35:37 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice()
{
	this->_Type = "ice";
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(std::string name) : Animal(name)
{
	(void)name;
	this->_Type = "ice";
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice &rhs)
{
	*this = rhs;
}

Ice &Ice::operator=(const Ice &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice : " << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; 
}

void Ice::clone() const
{
	return (new Ice());
}