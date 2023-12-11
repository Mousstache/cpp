/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:31 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 23:33:59 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

ICharacter::ICharacter()
{
	this->_Type = "ICharacter";
	std::cout << "ICharacter Constructor called" << std::endl;
}

ICharacter::ICharacter(std::string name) : Animal(name)
{
	(void)name;
	this->_Type = "ICharacter";
	std::cout << "ICharacter Constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &rhs)
{
	*this = rhs;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter destructor called" << std::endl;
}

void ICharacter::equip(AMateria* m)
{
	int i = -1;

	for (int i= 0;i < 4;++i)
	{
		if (this->_item[i] != NULL)
			break ;
	}
	if (i == 3)
	{
		std::cout << "FUll !" << std::endl;
		return ()
	}
	i = -1;
	while (++i < 4)
	{
		if (this->_item[i] == NULL)
			this->_item[i] = m;
	}
}

void ICharacter::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Index pas bon" << std::endl;
		return ;
	}
	this->_item[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
	if (this->_item[idx])
		_item[idx]->use(target);
}