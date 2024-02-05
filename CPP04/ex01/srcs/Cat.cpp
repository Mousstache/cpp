/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:18 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 16:45:53 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat() : Animal()
{
	this->_brain = new Brain;
	this->_Type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat( const Cat &rhs ) : Animal ( rhs )
{
	this->_brain = new Brain();
	*this = rhs;
	std::cout << "Cat :: Copy Constructor Called\n";
}

Cat	&Cat::operator=( Cat const &rhs )
{
	if ( this != &rhs )
	{
		this->_Type = rhs._Type;
		*this->_brain = *rhs._brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "meeeeow" << std::endl;
}