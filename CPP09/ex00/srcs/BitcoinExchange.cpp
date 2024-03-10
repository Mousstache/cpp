/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:03:40 by motroian          #+#    #+#             */
/*   Updated: 2024/03/09 22:53:03 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


Btc::Btc(){}

Btc::~Btc(){}

Btc::Btc(const Btc &rhs){*this = rhs;}

Btc& Btc::operator=(const Btc &rhs){(void)rhs;return (*this);}


void Btc::find_data(std::map<std::string, float>& myMap, std::string line, float value)
{
	(void)value;
	std::map<std::string, float>::iterator it = myMap.find(line);
	std::map<std::string, float>::iterator it_test = myMap.find(line);
	if (it != myMap.end())
	{
        std::cout << it->first << " => " << value << " = ";
		value = value * it->second;
		std::cout << value << std::endl;
    } 
	else 
	{
		it = myMap.lower_bound(line);
		it--;
		it_test = it;
       	std::cout << it->first << " => " << value << " = ";
		value = value * it->second;
		std::cout << value << std::endl;
    }
}

void Btc::parsing(std::map<std::string, float>myMap, std::string line)
{
	std::istringstream ss(line);
	float valeur;
    std::string string;

	std::getline(ss, string, '|');
	ss >> valeur;
	int year = atoi(string.substr(0, 4).c_str());
    int month = atoi(string.substr(5, 7).c_str());
    int day = atoi(string.substr(8, 10).c_str());

	if (year > 2022 || year < 2009)
	{
		std::cout << "Error: bad input" << " => " << string << std::endl;
		return ;
	}
	if (month < 1 || month > 12)
	{
		std::cout << "Error: bad input" << " => " << string << std::endl;
		return ;
	}
	if (day < 1 || day > 31 || (day > 28 && month == 2))
	{
		std::cout << "Error: bad input" << " => " << string << std::endl;
		return;
	}
	if (valeur < 0 || valeur > 1000)
	{
		if (valeur < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else
			std::cout << "Error: too large a number." <<  std::endl;
		return ;
	}
	std::string dateFormatee = string.substr(0, 10);
	find_data(myMap, dateFormatee, valeur);
}

void Btc::stock_data(const std::string& nomFichier, std::map<std::string, float>& myMap)
{
    std::ifstream fichier(nomFichier.c_str());

    if (fichier) 
	{ 
        std::string ligne;
        while (std::getline(fichier, ligne))
		{
            std::istringstream stream(ligne);
            
            float cle;
            std::string valeur;
            if (std::getline(stream, valeur, ',')) 
			{
                stream >> cle;
                myMap[valeur] = cle;
            }
        }
        fichier.close();
    } 
	else
		throw std::runtime_error("Erreur lors de l'ouverture du fichier.");
}

void Btc::begin(char **av)
{
	std::map<std::string, float> myMap;
		std::map<std::string, float>::iterator it;

		std::string filename =  "data.csv";
		std::ifstream file(filename.c_str());
		if (!file.is_open())
			throw std::runtime_error("Erreur lors de l'ouverture du fichier.");
		std::string line;
		stock_data("data.csv",myMap);

		std::string file_read =  av[1];
		std::ifstream file1(file_read.c_str());
		if (!file1.is_open())
			throw std::runtime_error("Erreur lors de l'ouverture du fichier.");
		std::string ligne;
		std::string input =  av[1];
   		std::ifstream fichier(input.c_str());
        while (std::getline(fichier, ligne))
		{
			parsing(myMap, ligne);
            std::istringstream stream(ligne);
            
            float cle;
            std::string valeur;
            if (std::getline(stream, valeur, ',')) 
			{
                stream >> cle;
                myMap[valeur] = cle;
            }
        }
        fichier.close();
    	file1.close();
}