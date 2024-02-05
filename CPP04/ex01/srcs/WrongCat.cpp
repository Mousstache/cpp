/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:55:05 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 18:11:37 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_Type = "Default name";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal()
{
	*this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "rien." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}