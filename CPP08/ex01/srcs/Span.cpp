/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:43:15 by motroian          #+#    #+#             */
/*   Updated: 2024/01/02 20:56:05 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#define BLUE "\033[34m"
#define RESET "\033[0m"

Span::Span(unsigned int N): _span(0), _N(N)
{
}

Span::Span(): _span(0), _N(0)
{
}

Span::~Span()
{}

Span::Span( Span  const & rhs)
{
	*this = rhs;
}

// std::ostream& operator<<(std::ostream& os, const Span& span) {
// 	os << span.getSpan();
//     return os;
// }

std::ostream& operator<<(std::ostream& o, Span const& rhs) {
    o << "Span content: " << std::endl;
    for (unsigned int i = 0; i < rhs.getSpan().size(); i++) {
        o << "[" << BLUE << rhs.getSpan()[i] << RESET << "]";
    }
    o << std::endl;
    return o;
}

Span & Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_span = rhs._span;
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

int Span::shortestSpan()
{
    if (this->_span.size() < 2) 
	{
        throw std::logic_error("Not enough numbers to find a span.");
    }

	std::vector<int> sortedNumbers = this->_span;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minSpan = sortedNumbers[1] - sortedNumbers[0];

	for (size_t i = 2; i < sortedNumbers.size(); ++i)
	{
		int currentSpan = sortedNumbers[i] - sortedNumbers[i - 1];
		if (currentSpan < minSpan) {
			minSpan = currentSpan;
		}
	}
    return minSpan;
}

// int Span::shortestSpan()
// {
// 	if (_span.size() < 0 || _span.size() == 1)
// 		throw tooFew();
// 	else
// 	{
// 		// std::vector<int> sortedNumbers = _span;
//         std::sort(_span.begin(), _span.end());
// 		for (size_t i = 0;i < _span.size();i++)
// 		{
// 			std::cout << _span[i] << std::endl;
// 			if (i = _span.end())
// 				return (_span[i]);
// 		}
// 	}
// 	return (-1);
// }

int Span::longestSpan()
{
	if (this->_span.size() < 2) 
	{
        throw std::logic_error("Not enough numbers to find a span.");
    }

        int minElement = *std::min_element(_span.begin(), _span.end());
        int maxElement = *std::max_element(_span.begin(), _span.end());

        return maxElement - minElement;
}