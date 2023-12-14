/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:31 by motroian          #+#    #+#             */
/*   Updated: 2023/12/14 23:19:34 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4;i++)
		this->_item[i] = NULL;
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4;i++)
		this->_item[i] = NULL;
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character(const Character &rhs)
{
	*this = rhs;
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_item[i])
				delete this->_item[i];
			this->_item[i] = rhs._item[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

void Character::equip(AMateria* m)
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
		delete m;
		return ;
	}
	i = -1;
	while (++i < 4)
	{
		if (this->_item[i] == NULL)
			this->_item[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Index pas bon" << std::endl;
		return ;
	}
	this->_item[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 4 || _item[idx] == NULL)
	{
		// std::cout << "Index pas bon" << std::endl;
		return ;
	}
	if (this->_item[idx])
		_item[idx]->use(target);
}

std::string const &Character::getName() const
{
	return (this->_name);
}