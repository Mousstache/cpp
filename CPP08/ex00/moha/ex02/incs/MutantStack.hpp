/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 23:45:42 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/16 04:22:56 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>
# include <deque>
# include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>( void ) { std::cout << "MutantStack default constructor called" << std::endl; };
		MutantStack<T>( MutantStack const & src) { *this = src; std::cout << "MutantStack copy constructor called" << std::endl; }
		~MutantStack<T>( void ) { std::cout << "MutantStack destructor called" << std::endl; };

		MutantStack<T> &		operator=( MutantStack const & rhs );
		typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		iterator	begin( void ) { return (this->c.begin()); }
		reverse_iterator	rbegin( void )  { return (this->c.rbegin()); }
		reverse_iterator	rend( void ) { return (this->c.rend()); }
		iterator	end( void ) { return (this->c.end()); }
};

template <typename T>
MutantStack<T> &		MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	if (this != &rhs)
		this->c = rhs.c;
	return (*this);
}

#endif