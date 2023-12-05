/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:18 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 18:14:42 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_Type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	(void)name;
	this->_Type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::~Cat()
{
	this->_Type = "Cat";
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
};

void Cat::makeSound() const
{
	std::cout << "meeeeow" << std::endl;
}