/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:58:52 by motroian          #+#    #+#             */
/*   Updated: 2024/01/03 19:47:57 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <cstdlib>
#include <vector>
#include <stack>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <stack>
#include <iostream>

template <typename T>

class MutantStack : public std::stack<T>
{
	public :
		MutantStack(){};
		MutantStack( MutantStack  const & rhs){(void)rhs;};
		MutantStack &operator=( MutantStack const & rhs ){(void)rhs;};
		~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        iterator begin(void){return this -> c.begin();}
        iterator end(void){return this -> c.end();}
        const iterator cbegin(void){return this -> c.begin();}
        const iterator cend(void){return this -> c.end();}
	// private :
	// 	std::stack<T> internalStack;
};

// std::ostream &	operator<<( std::ostream & o, MutantStack const & rhs);

#endif