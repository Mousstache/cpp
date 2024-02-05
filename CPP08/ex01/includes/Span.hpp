/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:07:03 by mgamil            #+#    #+#             */
/*   Updated: 2024/01/02 20:07:09 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>

class tooMuch : public std::exception
{
	virtual const char *what() const throw()
	{
		return "There Is Too Much Number";
	}
};

class tooFew : public std::exception
{
	virtual const char *what() const throw()
	{
		return "There Is Too Few Number";
	}
};

class Span
{
	public :
		Span(unsigned int N);
		Span();
		Span( Span  const & rhs);
		Span &operator=( Span const & rhs );
		~Span();
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		std::vector<int> getSpan()const{return this->_span;};
		unsigned int getN(){return _N;};
	private :
		std::vector<int> _span;
		unsigned int _N;

};

std::ostream &	operator<<( std::ostream & o, Span const & rhs);

#endif