/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:09:58 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:22:08 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int	main(int ac, char const **av)
{
	if (ac != 4 || !*av[2])
		return (1);
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	std::string filename = std::string(av[1]) + ".replace";

	std::ifstream file(av[1]);
	std::ofstream outputfile;

	outputfile.open(filename.c_str());

	while (std::getline(file, line))
	{
		std::size_t found = 0;
		while ((found = line.find(s1, found)) != std::string::npos)
		{
			if  (found != std::string::npos)
			{
				line.erase(found, s1.length());
				line.insert(found, s2);
				found += s2.length();
			}
		}
		std::cout << line << std::endl;
		outputfile << line << std::endl;
	}
}