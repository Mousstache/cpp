/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:10:51 by motroian          #+#    #+#             */
/*   Updated: 2024/03/08 18:40:58 by motroian         ###   ########.fr       */
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
				throw std::runtime_error("Error: Wrong args");
			else if (stack.size() <= 1)
				throw std::runtime_error("Error: Wrong args");
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
					if (nb2 == 0)
						throw std::runtime_error("impossible division");
					result = nb1 / nb2;
				}
				else if (token == "*")
					result = nb1 * nb2;
				stack.push(result);
			}
		}
		if (stack.size() > 1)
			throw std::invalid_argument("Error: not a good format");
		if (stack.size() < 1)
			throw std::invalid_argument("Error: not a good format");
		return (stack.top());
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		try 
		{
			int result = calculate(av[1]);
			std::cout << result << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cout << "Error: Wrong args" << std::endl;
}