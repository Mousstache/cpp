/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:15:56 by motroian          #+#    #+#             */
/*   Updated: 2024/03/09 19:48:06 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
# define PMERGEME

#include <limits.h>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <stack>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sstream>
#include <deque>
#include <ctime>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &rhs);
		PmergeMe &operator=(const PmergeMe &rhs);
		void	merge_insert(std::deque<int>::iterator begin, std::deque<int>::iterator end);
		void	merge_insert(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	begin(char **av, int ac);
		void	parsing(char **input, int n);

};

#endif