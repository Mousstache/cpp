/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:10:51 by motroian          #+#    #+#             */
/*   Updated: 2024/03/04 18:26:01 by motroian         ###   ########.fr       */
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
			else if (token != "+" && token != "-" && token != "*" && token != "/")
				exit(0);
			else if (stack.size() <= 1)
				exit(0);
			else
			{
				int nb2 = stack.top();
				stack.pop();
				int nb1 = stack.top();
				stack.pop();
				int result;
				if (token == "-")
					result = nb1 - nb2;
				else if (token == "+")
					result = nb1 + nb2;
				else if (token == "/")
				{
					if (nb1 == 0 || nb2 == 0)
					{
						std::cout << "impossible division" << std::endl;
						exit(0);
					}
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