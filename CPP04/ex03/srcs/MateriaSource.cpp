/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:05:14 by motroian          #+#    #+#             */
/*   Updated: 2024/01/17 22:26:26 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() : _nbMateria(0)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(std::string name) : _nbMateria(0), _name(name)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	*this = rhs;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i])
				delete _materias[i];
			_materias[i] = rhs._materias[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (!materia)
		return ;
	else if (_nbMateria < 4)
	{
		_materias[_nbMateria] = materia;
		_nbMateria++;
	}
	else
	{
		std::cout << "MateriaSource :: Inventory is full" << std::endl;
		delete materia;
		return ;
	}
		
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0;i < 4;i++)
	{
		if (_materias[i] && type == _materias[i]->getType())
			return (_materias[i]->clone());
	}
	return (0);
}