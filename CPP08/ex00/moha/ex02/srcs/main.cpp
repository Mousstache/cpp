/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/16 04:34:53 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "MutantStack.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>
#include <list>
#include <stack>

int	main(void)
{
	std::cout << BBLUE << "Testing MutantStack with Stack" << RESET << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		for (int i = 0; i < 10; i++)
			mstack.push(i);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it++ << std::endl;
		}
		std::stack<int> s(mstack);
	}
	std::cout << BBLUE << "Testing MutantStack with Vector" << RESET << std::endl;
	{
		std::vector<int> mvector;
		mvector.push_back(5);
		mvector.push_back(17);
		std::cout << mvector.back() << std::endl;
		mvector.pop_back();
		std::cout << mvector.size() << std::endl;
		for (int i = 0; i < 10; i++)
			mvector.push_back(i);
		mvector.push_back(3);
		mvector.push_back(5);
		mvector.push_back(737);
		//[...]
		mvector.push_back(0);
		std::vector<int>::iterator it = mvector.begin();
		std::vector<int>::iterator ite = mvector.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it++ << std::endl;
		}
		std::vector<int> s(mvector);
	}
	std::cout << BBLUE << "Testing MutantStack with List" << RESET << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << mlist.back() << std::endl;
		mlist.pop_back();
		std::cout << mlist.size() << std::endl;
		for (int i = 0; i < 10; i++)
			mlist.push_back(i);
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		//[...]
		mlist.push_back(0);
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it++ << std::endl;
		}
		std::list<int> s(mlist);
	}
	return (0);
}