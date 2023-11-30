/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:13:45 by motroian          #+#    #+#             */
/*   Updated: 2023/11/29 22:37:07 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
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