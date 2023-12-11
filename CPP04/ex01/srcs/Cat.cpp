/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:18 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:29:36 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_brain = new Brain;
	this->_Type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	(void)name;
	this->_brain = new Brain;
	this->_Type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meeeeow" << std::endl;
}