/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:10:51 by motroian          #+#    #+#             */
/*   Updated: 2024/02/29 20:10:35 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int calculate(std::string operation)
{
	std::stack<int> stack;
		std::stringstream ss(operation);
		std::string token;
		while (ss >> token)
		{
			if (isdigit(token[0]))
				stack.push(atoi(token.c_str()));
			else
			{
				int nb2 = stack.top();
				stack.pop();
				std::cout << "number1: " << nb2 << std::endl;
				int nb1 = stack.top();
				stack.pop();
				std::cout << "number2: " << nb1 << std::endl;
				int result;
				if (token == "-")
					result = nb1 - nb2;
				else if (token == "+")
					result = nb1 + nb2;
				else if (token == "/")
				{
					result = nb1 / nb2;
				}
				else if (token == "*")
					result = nb1 * nb2;
				stack.push(result);
			}
		}
		return (stack.top());
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int result = calculate(av[1]);
		std::cout << result << std::endl;
	}
	else
		std::cout << "Wrong args" << std::endl;
}