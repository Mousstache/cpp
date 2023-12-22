/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:36:29 by motroian          #+#    #+#             */
/*   Updated: 2023/12/22 23:28:24 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
#include <cmath>

template <typename T>

class Array
{
	private :
		T *_array;
	public :
		Array(){new _array[0];}
		Array(unsigned int n){new _array[n];}
		Array(const Array &rhs){*this = &rhs;}
		Array &operator= (const Array &rhs)
		{
			if (this != &rhs)
				_array[] = rhs._array[];
			return (*this);
		}
		~Array(){delete _array[];}
		size_t size()
		{
			std::cout << _array.size() << std::endl;
			return ((unsigned int)_array.size());
		}
};

class outofBound: public std::exception
{
	public :
		virtual const char *what() const throw();
};

#endif