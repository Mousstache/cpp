/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:47:11 by motroian          #+#    #+#             */
/*   Updated: 2024/01/16 19:09:59 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}


Animal::Animal(const Animal &rhs)
{
	this->_type = rhs.getType();
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
};


Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType()const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << " ** MAKE SOUND ** !" << std::endl;
}