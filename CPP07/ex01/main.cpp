/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 22:37:31 by motroian          #+#    #+#             */
/*   Updated: 2023/12/22 22:20:49 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>

void affiche(T& element)
{
	std::cout << element << std::endl;
}

template <typename T>

void iter(T* array, size_t len, void(*func)(T& element))
{
	for (size_t i = 0;i < len;i++)
		func(array[i]);
}

int main( void ) 
{
	int tab[] = {1,2,3};
	iter(tab, 3, affiche);
	return 0;
}