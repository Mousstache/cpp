/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:00 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 23:53:32 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMeteria.hpp"

AMateria::AMateria()
{
	this->_Type = "default";
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string name) : Animal(name)
{
	(void)name;
	this->_Type = "default";
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const & getType()const
{
	return (this->_Type);
}

void AMateria::clone() const
{
	return (*this);
}