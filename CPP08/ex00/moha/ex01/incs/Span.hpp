/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:45:42 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/14 03:00:53 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>		_array;
		unsigned int			_N;
	public:
		Span( void ) { std::cout << "Span default constructor called" << std::endl; };
		Span( unsigned int N ) : _N(N) { std::cout << "Span constructor called" << std::endl; }
		Span( Span  const & src) { *this = src; std::cout << "Span copy constructor called" << std::endl; }
		~Span( void ) { std::cout << "Span destructor called" << std::endl; };

		Span &		operator=( Span const & rhs );
		void		addNumber( int n );
		void		addRange( int start, int end );
		int			shortestSpan( void );
		int			longestSpan( void );
		std::vector<int>		getArray( void ) const { return (this->_array); }
		class ArrayIsFull : public std::exception
		{
			public:
				virtual const char * what() const throw() { return ("Array is full"); }
		};
		class ArrayIsTooSmall : public std::exception
		{
			public:
				virtual const char * what() const throw() { return ("Array is too small"); }
		};
		class NoShortestSpanFound : public std::exception
		{
			public:
				virtual const char * what() const throw() { return ("No shortest span found !"); }
		};
		class NoLongestSpanFound : public std::exception
		{
			public:
				virtual const char * what() const throw() { return ("No longest span found !"); }
		};
};

std::ostream &	operator<<( std::ostream & o, Span const & rhs);
#endif