/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:13:45 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 18:41:23 by motroian         ###   ########.fr       */
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

Fixed::Fixed(const int nb)
{
	_fixed = nb << _stock;
}

Fixed::Fixed(const float nb)
{
	_fixed = roundf(nb * (float)(1 << _stock));
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
};

float Fixed::toFloat( void ) const
{
	float nb;

	nb = (float)_fixed / (1 << this->_stock);
	return (nb);
}


int Fixed::toInt( void ) const
{
	return (this->_fixed >> this->_stock);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixe) {
    os << fixe.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}
