/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:55:05 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 23:50:31 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

wrongCat::wrongCat()
{
	this->_Type = "Default name";
	std::cout << "wrongCat constructor called" << std::endl;
}

wrongCat::wrongCat(std::string name)
{
	this->_Type = name;
	std::cout << "wrongCat constructor called" << std::endl;
}
wrongCat::wrongCat(const wrongCat &rhs)
{
	*this = rhs;
}

wrongCat &wrongCat::operator=(const wrongCat &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
};

void wrongCat::makeSound() const
{
	std::cout << "wrong meeeeow" << std::endl;
}

wrongCat::~wrongCat()
{
	std::cout << "wrongCat destructor called" << std::endl;
}