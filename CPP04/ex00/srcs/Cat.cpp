/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:18 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 23:06:40 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string name)
{
	this->_Type = name;
}
Cat::Cat(const Cat &rhs)
{
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	(void)rhs;
	return (*this);
};

void Cat::makeSound()
{
	std::cout << "meeeeow" << std::endl;
}