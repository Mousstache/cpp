/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:14:19 by motroian          #+#    #+#             */
/*   Updated: 2024/03/05 00:02:02 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void parsing(char **input)
{
	for (int i = 1; input[i];i++)
	{
		
	}
}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		std::vector<int> vector;
		std::deque<int> deque;
		std::vector<int>::iterator it;
		
		for (int i = 1;av[i];i++)
			vector.push_back(atoi(av[i]));

		for (it = vector.begin();it != vector.end(); ++it)
			std::cout << *it << std::endl;

		parsing(av);
		merge_insert();
		std::cout << "Before: " <<std::endl;
		std::cout << "After: " <<std::endl;

		std::cout << "Time to process a range of " << "elements with std::vector : " << std::endl;
		std::cout << "Time to process a range of " << "elements with std::deque : " << std::endl;
	}
	else
		std::cout << "Wrong args" << std::endl;

}