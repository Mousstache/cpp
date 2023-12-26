/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/13 23:31:33 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <cstdlib>
#include "Colors.hpp"

int main(int, char**)
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
		i = easyfind(vec, to_find);
		std::cout << BGREEN << "Number: " << (*i) << " found !" << RESET << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << BRED << e.what() << RESET << '\n';
	}
	
	return 0;
}
