/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:20:38 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 18:35:25 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs)
{
	*this = rhs;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		_fixed = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}
