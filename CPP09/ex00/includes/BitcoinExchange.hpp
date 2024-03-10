/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:03:35 by motroian          #+#    #+#             */
/*   Updated: 2024/03/09 22:49:57 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE


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
#include <fstream>
#include <map>

class Btc
{
	public:
		Btc();
		~Btc();
		Btc(const Btc &rhs);
		Btc &operator=(const Btc &rhs);
		void	begin(char **av);
		void	find_data(std::map<std::string, float>& myMap, std::string line, float value);
		void	stock_data(const std::string& nomFichier, std::map<std::string, float>& myMap);
		void	parsing(std::map<std::string, float>myMap, std::string line);

	private:
		std::map<std::string, float> myMap;
};


#endif