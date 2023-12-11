/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:13:45 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 20:52:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed():_fixed(0)
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

int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

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

Fixed Fixed::operator+(Fixed const rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const rhs)
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

bool Fixed::operator==(Fixed const &rhs)
{
	if (this->toFloat() == rhs.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=(Fixed const &rhs)
{
	if (this->toFloat() != rhs.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>(Fixed const &rhs)
{
	if (this->toFloat() > rhs.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=(Fixed const &rhs)
{
	if (this->toFloat() >= rhs.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<(Fixed const &rhs)
{
	if (this->toFloat() < rhs.toFloat())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=(Fixed const &rhs)
{
	if (this->toFloat() <= rhs.toFloat())
		return (true);
	else
		return (false);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a._fixed < b._fixed)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a._fixed > b._fixed)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a._fixed < b._fixed)
		return (a);
	else
		return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a._fixed > b._fixed)
		return (a);
	else
		return (b);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return tmp;
}

Fixed &Fixed::operator++()
{
	_fixed += 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed &Fixed::operator--()
{
	_fixed -= 1;
	return (*this);
}