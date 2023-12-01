/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:47:11 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 22:33:38 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal(std::string name)
{
	this->_Type = name;
}
Animal::Animal(const Animal &rhs)
{
	*this = rhs;
}

Animal &Animal::operator=(const Animal &rhs)
{
	(void)rhs;
	return (*this);
};


~Animal()
{
	std::cout << "destructor called" << std::endl;
}

std::string Animal::getType()
{
	return (this->_Type);
}