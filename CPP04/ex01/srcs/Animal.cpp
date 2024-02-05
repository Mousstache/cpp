/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:47:11 by motroian          #+#    #+#             */
/*   Updated: 2024/01/16 19:59:01 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_Type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		this->_Type = rhs._Type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType()const
{
	return (this->_Type);
}

void Animal::makeSound() const
{
	std::cout << "rien." << std::endl;
}