/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:07:00 by motroian          #+#    #+#             */
/*   Updated: 2023/11/28 19:46:07 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook()
	: _contactCount(-1)
{
	return ;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

void DisplayGroup()
{
    std::cout << std::endl
			  << std::setw(10) << std::right << "FirstName" << "|"
              << std::setw(10) << std::right << "LastName"<< "|"
              << std::setw(10) << std::right << "NickName"<< "|"
              << std::setw(10) << std::right << "Number"<< "|"
              << std::endl;
}

void PhoneBook::display()
{
	int	nb;
	int	i;

	DisplayGroup();
	nb = this->getContactCount();
	i = 0;
	while (i < nb)
	{
		this->getContact(i).display();
		i++;
	}
}

void PhoneBook::remplir()
{
	std::stringstream ss;
	std::string putain;
	int i = 8;
	this->_contactCount = 7;
	for (int j = 0; j < i; j++)
	{
		ss << j;
		putain = ss.str();
		_contacts[j].setFirstName(putain);
		_contacts[j].setLastName(putain);
		_contacts[j].setNickName(putain);
		_contacts[j].setPhoneNumber(putain);
		_contacts[j].setSecret(putain);
	}
	this->display();
}

void PhoneBook::addContact()
{
	std::string line;

	if (_contactCount == -1)
		_contactCount++;
	/* First Name*/
	std::cout << "First name :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof())
		return ((void)line);
	if (line.empty())
		return ;
	this->_contacts[_contactCount % 8].setFirstName(line);

	/* Last Name*/
	std::cout << "Last name :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return ((void)line);
	if (line.empty())
		return ;
	this->_contacts[_contactCount % 8].setLastName(line);

	/* Nickname */
	std::cout << "Nickname :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof())
		return ((void)line);
	if (line.empty())
		return ;
	this->_contacts[_contactCount % 8].setNickName(line);

	/* Phone Number */
	std::cout << "Phone Number :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return ((void)line);
	if (line.empty())
		return ;
	this->_contacts[_contactCount % 8].setPhoneNumber(line);

	/* Darkest Secret*/
	std::cout << "Darkest Secret :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return ((void)line);
	if (line.empty())
		return ;
	this->_contacts[_contactCount % 8].setSecret(line);

	this->_contactCount++;
}

void PhoneBook::chooseContact()
{
	std::string index;
	Contact contact;
	
	std::cout << std::endl;
	std::cout << "Entrez l'index :";
	getline(std::cin, index);
	if (std::cin.eof()) 
		return ;
	if (index.length() > 1 || atoi(index.c_str()) > _contactCount)
	{
		std::cout << std::endl << "Probleme d'index" << std::endl;
		return ;
	}
	contact = this->getContact(atoi(index.c_str()));
	DisplayGroup();
	contact.display();
	std::cout << std::endl;
	std::cout << "Secret : " << contact.getSecret(index) << std::endl;
}
