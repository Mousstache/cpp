/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:00 by motroian          #+#    #+#             */
/*   Updated: 2024/01/17 22:25:43 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type ) : _Type(type)
{
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

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria :: use called but action toward " << target.getName() << " is not defined\n";
}

std::string const &AMateria::getType()const
{
	return (this->_Type);
}
