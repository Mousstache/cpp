/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:36:29 by motroian          #+#    #+#             */
/*   Updated: 2023/12/26 20:28:26 by motroian         ###   ########.fr       */
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
		unsigned int _size;
	public :
		Array(){
			_size = 10;
			_array =  new T[_size];
		}
		Array(unsigned int n){
			_size = n;
			_array = new T[n + 1];
		}
		
		T& operator[] (unsigned int index){

			if (index > _size || index < 0)
				throw std::out_of_range("Out of bonds"); 

			return _array[index];
		}

		Array(const Array &rhs)
		{
			_size = rhs.size();
			_array = new T[rhs.size()];
			std::cout << "Size value : " << rhs.size() << std::endl;
			for (unsigned int i = 0; i < rhs.size(); i++)
			{
				_array[i] = i;
			}
		}
		

		Array &operator= (const Array &rhs)
		{
			if (this != &rhs)
			{
				_size = rhs.size();
				_array = new T[rhs.size()];
				for (unsigned int i = 0; i < rhs.size(); i++)
				{
					_array[i] = i;
				}
			}
			return (*this);
		}
		~Array		(){delete [] _array;}
		unsigned int size() const
		{
			return _size;
		}
};


#endif