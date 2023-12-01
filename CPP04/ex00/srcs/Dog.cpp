/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:15 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 22:35:55 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog(std::string name)
{
	this->_Type = name;
}
Dog::Dog(const Dog &rhs)
{
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	(void)rhs;
	return (*this);
};

~Dog()
{
	std::cout << "destructor called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "wafe wafe" << std::endl;
}