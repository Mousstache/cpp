/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:43:15 by motroian          #+#    #+#             */
/*   Updated: 2023/12/26 23:54:26 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): _N(N)
{
	_span(0);
}

~Span::Span()
{}

Span::Span( Span  const & src)
{
	*this = &rhs;
}

std::ostream& operator<<(std::ostream& os, const Span& span) {
	os << span._span;
    return os;
}

Span::Span &operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		_N = rhs._N;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_span.size() + 1 > _N)
		throw tooMuch();
	else
	{
		_span.push_back(n);
	}
}

void Span::shortestSpan()
{
	if (_span.size() < 0 || _span.size() == 1)
		throw tooFew();
	else
	{
		// std::vector<int> sortedNumbers = _span;
        std::sort(_span.begin(), _span.end());
		for (int i = 0;i < _span.size();i++)
			std::cout << _span[i] << std::endl;
	}
}

void Span::longestSpan()
{
	if (_span.size() < 0 || _span.size() == 1)
		throw tooFew();
}