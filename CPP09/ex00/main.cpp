/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:04:16 by motroian          #+#    #+#             */
/*   Updated: 2024/02/29 06:37:05 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void stock(const std::string& nomFichier, std::map<std::string, float>& myMap) {
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

int main (int ac, char **av)
{
	if (ac == 3)
	{
		std::map<std::string, float> myMap;
		std::map<std::string, float> myMap;
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
		stock(av[1],myMap);

		std::string file_read =  av[2];
		std::ifstream file1(file_read.c_str());
		if (!file1.is_open())
		{
        	std::cout << "Impossible d'ouvrir le fichier " << file_read << std::endl;
        	return 1;
   		}
		std::string line_read;
    	while (getline(file1, line_read))
		{
			parsing(line_read);
    	    std::cout << line_read << std::endl;
    	}
    	file1.close();

		for (it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Clé : " << it->first << ", Valeur : " << it->second << std::endl;
    	}
	}
	else
		std::cout << "Wrong args" << std::endl;
}