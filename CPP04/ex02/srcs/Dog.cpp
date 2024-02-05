/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:15 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 16:45:20 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
	this->_brain = new Brain;
	this->_Type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog( const Dog &rhs ) : Animal ( rhs )
{
	this->_brain = new Brain();
	*this = rhs;
	std::cout << "Dog :: Copy Constructor Called\n";
}

Dog	&Dog::operator=( Dog const &rhs )
{
	if ( this != &rhs )
	{
		this->_Type = rhs._Type;
		*this->_brain = *rhs._brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "meeeeow" << std::endl;
}