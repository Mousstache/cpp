/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:04:16 by motroian          #+#    #+#             */
/*   Updated: 2024/03/02 06:46:11 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void find_data(std::map<std::string, float>& myMap, std::string line)
{
	// std::map<std::string, float>::iterator it;
	std::map<std::string, float>::iterator it = myMap.find(line);
	if (it != myMap.end()) {
        std::cout << "La valeur associée à la clé " << line << " est : " << it->second << std::endl;
    } else {
        std::cout << "La clé " << line << " n'a pas été trouvée dans la map." << std::endl;
    }
}

void parsing(std::map<std::string, float>myMap, std::string line)
{
	// std::cout << "ligne : " << line << std::endl;
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
		std::cout << "year non valid" << std::endl;
		return ;
	}
	if (month < 1 || month > 12)
	{
		std::cout << "month non valid" << std::endl;
		return ;
	}
	if (day < 1 || day > 31)
	{
		std::cout << "day non valid" << std::endl;
		return;
	}
	// std::cout << "line_lue :" << string << std::endl;
	// std::cout << "valeur :" << valeur << std::endl;
	if (valeur < 0 || valeur > 1000)
	{
		std::cout << "wrong btc" <<  std::endl;
		return ;
	}
	std::cout << "year: " << year << " month: " << month << " day: " << day << std::endl;
	std::string dateFormatee = string.substr(0, 10); // Garder uniquement la date (sans l'heure)

	find_data(myMap, dateFormatee);
}

void stock_data(const std::string& nomFichier, std::map<std::string, float>& myMap) {
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
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
}

// void stock_input(const std::string& nomFichier, std::map<std::string, float>& myMap) {
//     std::ifstream fichier(nomFichier.c_str());

//     if (fichier) 
// 	{ 
//         std::string ligne;
        
//         while (std::getline(fichier, ligne))
// 		{
//             std::istringstream stream(ligne);
            
//             float cle;
//             std::string valeur;
//             if (std::getline(stream, valeur, '|'))
// 			{
//                 stream >> cle;
//                 myMap[valeur] = cle;
//             }
//         }
//         fichier.close();
//     } 
// 	else 
//         std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
// }



int main (int ac, char **av)
{
	if (ac == 3)
	{
		std::map<std::string, float> myMap;
		// std::map<std::string, float> myMap2;
		std::map<std::string, float>::iterator it;

		std::string filename =  av[1];
		std::ifstream file(filename.c_str());
		if (!file.is_open())
		{
        	std::cout << "Impossible d'ouvrir le fichier " << filename << std::endl;
        	return 1;
   		}
		std::string line;
    	std::cout << "Contenu du fichier " << filename << ":" << std::endl;
		stock_data(av[1],myMap);
		// parsing(myMap);

		std::string file_read =  av[2];
		std::ifstream file1(file_read.c_str());
		if (!file1.is_open())
		{
        	std::cout << "Impossible d'ouvrir le fichier " << file_read << std::endl;
        	return 1;
   		}
		// stock_input(av[2], myMap2);
		std::string ligne;
		std::string input =  av[2];
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

		// for (it = myMap.begin(); it != myMap.end(); ++it) {
        // std::cout << "Clé : " << it->first << ", Valeur : " << it->second << std::endl;
    	// }
		// std::cout << std::endl;
		// for (it = myMap2.begin(); it != myMap2.end(); ++it) {
        // std::cout << "Clé : " << it->first << ", Valeur : " << it->second << std::endl;
    	// }
	}
	else
		std::cout << "Wrong args" << std::endl;
}