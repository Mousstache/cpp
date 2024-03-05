/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:14:19 by motroian          #+#    #+#             */
/*   Updated: 2024/03/05 23:40:19 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void parsing(char **input, int n)
{
	for (int i = 1; i < n;i++)
	{
		if (std::atol(input[i]) > INT_MAX || std::atol(input[i]) < INT_MIN)
		{
			std::cout << "Error: wrong number" << std::endl;
			exit(0);
		}
		if (!isdigit(std::atol(input[i])))
		{
			std::cout << "Error: Not digit" << std::endl;
			exit(0);
		}
	}
	// for (int i = 1; i <= n;i++)
	// {
	// }
}

void	merge_insert(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) <= 1)
		return ;
	std::vector<int>::iterator middle = begin;
	std::advance(middle, (std::distance(begin, end) / 2));
	merge_insert(begin, middle);
	merge_insert(middle, end);
	std::inplace_merge(begin, middle, end);
}


void	merge_insert(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	if (std::distance(begin, end) <= 1)
		return ;
	std::deque<int>::iterator middle = begin;
	std::advance(middle, (std::distance(begin, end) / 2));
	merge_insert(begin, middle);
	merge_insert(middle, end);
	std::inplace_merge(begin, middle, end);
}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		std::vector<int> vector;
		std::deque<int> deque;
		std::vector<int>::iterator it;
		std::clock_t vec_time_begin;
		std::clock_t vec_time_end;
		std::clock_t deq_time_begin;
		std::clock_t deq_time_end;
		
		for (int i = 1;i <= ac;i++)
			vector.push_back(atoi(av[i]));
		for (int i = 1;i <=ac;i++)
			deque.push_back(atoi(av[i]));
		std::cout << "Before: ";
		for (it = vector.begin();it != vector.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
		parsing(av, ac);
		vec_time_begin = std::clock();
		merge_insert(vector.begin(), vector.end());
		vec_time_end = std::clock();

		deq_time_begin = std::clock();
		merge_insert(deque.begin(), deque.end());
		deq_time_end = std::clock();
		std::cout << "After: ";
		for (it = vector.begin();it != vector.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << vector.size() << " elements with std::vector : " << vec_time_end << " us" << std::endl;
		std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << deq_time_end << " us" << std::endl;
	}
	else
		std::cout << "Wrong args" << std::endl;

}