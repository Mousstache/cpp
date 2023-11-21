/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:42:29 by motroian          #+#    #+#             */
/*   Updated: 2023/11/21 19:26:51 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void rename(std::string &str)
{
	for (int i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
}

int main() {
    PhoneBook phoneBook;
	phoneBook.remplir();
	std::string command;

	std::cout << "Bienvenu sur le PhoneBook !" << std::endl;
    while (true) {
		if (command == "EXIT" || std::cin.eof()) {
            break;
        }
		std::cout << "Entrez une commande (ADD, SEARCH, EXIT) : ";
		std::getline (std::cin, command);
		rename(command);
		std::cout << "COMMAND :" << command << std::endl;
        if (command == "ADD") {
            phoneBook.addContact();
        }
		 else if (command == "SEARCH") {
			phoneBook.display();
			phoneBook.chooseContact();
        }
    }
    return 0;
}