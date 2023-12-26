/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:45:34 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/14 02:55:36 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"

Span &		Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_array = rhs._array;
		this->_N = rhs._N;
	}
	return (*this);
}

void		Span::addRange(int start, int end)
{
	if (this->_array.size() + (end - start) < this->_N)
	{
		for (int i = start; i < end; i++)
			this->_array.push_back(i);
	}
	else
		throw ArrayIsFull();
}

void		Span::addNumber(int n)
{
	if (this->_array.size() < this->_N)
		this->_array.push_back(n);
	else
		throw ArrayIsFull();
}

int			Span::shortestSpan(void)
{
	if (this->_array.size() < 2)
		throw ArrayIsTooSmall();
	if (*std::max_element(_array.begin(), _array.end()) == *std::min_element(_array.begin(), _array.end()))
		throw NoShortestSpanFound();
	std::vector<int> tmp = this->_array;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return (min);
}

int			Span::longestSpan(void)
{
	if (this->_array.size() < 2)
		throw ArrayIsTooSmall();
	if (*std::max_element(_array.begin(), _array.end()) == *std::min_element(_array.begin(), _array.end()))
		throw NoLongestSpanFound();
	return (*std::max_element(_array.begin(), _array.end()) - *std::min_element(_array.begin(), _array.end()));
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	o << "Span content: " << std::endl;
	for (unsigned int i = 0; i < rhs.getArray().size(); i++)
	{
			o << "[" << BLUE << rhs.getArray()[i] << RESET << "]";
		if (i != rhs.getArray().size() - 1)
			o << ", ";
	}
	o << std::endl;
	return (o);
}