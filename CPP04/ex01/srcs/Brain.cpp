/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:10:52 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:10:56 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->_Type = "Brain";
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(std::string name) : Animal(name)
{
	(void)name;
	// this->_Type = "Brain";
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	this->_Type = rhs._Type;
	return (*this);
}