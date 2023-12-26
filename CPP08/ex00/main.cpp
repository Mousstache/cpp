/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 20:57:25 by motroian          #+#    #+#             */
/*   Updated: 2023/12/26 22:14:24 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "./includes/Colors.hpp"

class notInTab : public std::exception
{
	virtual const char *what() const throw()
	{
		return "The Number Is Not in The Tab";
	}
};

template <typename T>

typename T::iterator easyFind(T&a, int nb)
{
 	std::vector<int>::iterator it;

 	it = find (a.begin(), a.end(), nb);
 	if (!(it != a.end()))
		throw notInTab();
	else 
		return it;
}

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator i;

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		int r = rand() % 10;
		std::cout << BYELLOW << "Number: " << RED << r << RESET << BYELLOW << " added to vector !" << RESET << std::endl;
		vec.push_back(r);
	}
	int to_find = rand() % 10;
	std::cout << BBLACK << "Number to find: " << GREEN << to_find << RESET << std::endl;
	try
	{
		i = easyFind(vec, to_find);
		std::cout << BGREEN << "Number: " << (*i) << " found !" << RESET << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << BRED << e.what() << RESET << '\n';
	}
	
}