/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:15 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:29:24 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string name) : Animal(name)
{
	this->_brain = new Brain;
	this->_Type = "Dog";
	std::cout << "Constructor called" << std::endl;
}

Dog::Dog() : Animal()
{
	this->_brain = new Brain;
	this->_Type = "Dog";
	std::cout << "Constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
};

Dog::~Dog()
{
	std::cout << "destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound()const
{
	std::cout << "wafe wafe" << std::endl;
}