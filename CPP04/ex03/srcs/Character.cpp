/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:12:31 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 18:26:30 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

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
	for (int i = 0; i < 4;i++)
	{
		if (this->_item[i])
			delete this->_item[i];
	}
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
			if (!this->_item[i])
			{
				if (this->_item[i] != m)
					this->_item[i] = m;
				return;
			}
	}
	else
		delete m;
	return;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		delete (this->_item[idx]);
		this->_item[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 4 && this->_item[idx])
	{
		this->_item[idx]->use(target);
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}