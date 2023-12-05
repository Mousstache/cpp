/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:54:51 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 22:45:34 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

wrongAnimal::wrongAnimal()
{
	this->_Type = "Default type";
	std::cout << "wrongAnimal constructor called" << std::endl;
}

wrongAnimal::wrongAnimal(std::string name)
{
	this->_Type = name;
	std::cout << "wrongAnimal constructor called" << std::endl;
}
wrongAnimal::wrongAnimal(const wrongAnimal &rhs)
{
	*this = rhs;
}

wrongAnimal &wrongAnimal::operator=(const wrongAnimal &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
};


// wrongAnimal::~wrongAnimal()
// {
// 	std::cout << "wrongAnimal destructor called" << std::endl;
// }

// std::string wrongAnimal::getType()const
// {
// 	return (this->_Type);
// }

// void wrongAnimal::makeSound() const
// {
// 	std::cout << "rien." << std::endl;
// }