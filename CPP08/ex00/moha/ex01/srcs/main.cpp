/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:26:58 by mgamil            #+#    #+#             */
/*   Updated: 2023/04/14 02:56:10 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include "Span.hpp"
#include <cstdlib>
#include <vector>

// int	main(void)
// {
// 	Span	sp;

// 	sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return (0);
// }

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	if (ac > 10)
	{
		std::cout << "Usage: ./span [int] [int] [int] [int] [int] [int] [int] [int] [int] [int]" << std::endl;
		return (0);
	}
	std::cout << CWHITE << "PART 1" << RESET << std::endl;
	{
		Span	sp(10000);
		srand(time(NULL));
		try {
			int start = rand() % 1000;
			int end = rand() % 1000;
			if (start > end)
				std::swap(start, end);
			std::cout << "Range added from " << IYELLOW << start << RESET << " to " << IYELLOW << end << RESET << std::endl;
			sp.addRange(start, end);
			std::cout << sp << std::endl;
			try {
				std::cout << MAGENTA << "Shortest span: " << sp.shortestSpan() << RESET << std::endl;
			}
			catch (std::exception & e) {
				std::cout << RED << e.what() << RESET << std::endl;
			}
			try {
				std::cout << CYAN << "Longest span: " << sp.longestSpan() << RESET << std::endl;
			}
			catch (std::exception & e) {
				std::cout << RED << e.what() << RESET << std::endl;
			}
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	std::cout << CWHITE << "PART 2" << RESET << std::endl;
	if (ac < 2)
		std::cout << "./span [int] .." << std::endl;
	else
	{
		Span	sp(ac - 1);
		try {
			for (int i = 1; i < ac; i++)
				sp.addNumber(atoi(av[i]));
			try {
				std::cout << MAGENTA << "Shortest span: " << sp.shortestSpan() << RESET << std::endl;
			}
			catch (std::exception & e) {
				std::cout << RED << e.what() << RESET << std::endl;
			}
			try {
				std::cout << CYAN << "Longest span: " << sp.longestSpan() << RESET << std::endl;
			}
			catch (std::exception & e) {
				std::cout << RED << e.what() << RESET << std::endl;
			}
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	{
		std::cout << CWHITE << "PART 3" << RESET << std::endl;
		Span	sp(2);
		std::cout << BGREEN << "Searching for span in empty array" << RESET << std::endl;
		try {
			std::cout << MAGENTA << "Shortest span: " << sp.shortestSpan() << RESET << std::endl;
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
		try {
			std::cout << MAGENTA << "Longest span: " << sp.longestSpan() << RESET << std::endl;
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
		std::cout << BGREEN << "Adding 2 equal numbers to a Span of 2" << RESET << std::endl;
		sp.addNumber(5);
		sp.addNumber(5);
		try {
			std::cout << MAGENTA << "Shortest span: " << sp.shortestSpan() << RESET << std::endl;
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
		try {
			std::cout << CYAN << "Longest span: " << sp.longestSpan() << RESET << std::endl;
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
		std::cout << BGREEN << "Adding another number to Span of 2" << RESET << std::endl;
		try {
			sp.addNumber(5);
		}
		catch (std::exception & e) {
			std::cout << RED << e.what() << RESET << std::endl;
		}
	}
	return (0);
}
