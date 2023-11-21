/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:07:00 by motroian          #+#    #+#             */
/*   Updated: 2023/11/19 18:59:32 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook()
	: _contactCount(0)
{
	std::cout << "PhoneBook constructor called" << std::endl;
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
              << std::setw(10) << std::right << "Secret" << "|"
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
	this->_contactCount = 8;
	for (int j = 0; j < i; j++)
	{
		ss << j << j;
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

	/* First Name*/
	std::cout << "First name :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return (std::cout << "je quitte\n", (void)line);
	this->_contacts[_contactCount % 8].setFirstName(line);

	/* Last Name*/
	std::cout << "Last name :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return (std::cout << "je quitte\n", (void)line);
	this->_contacts[_contactCount % 8].setLastName(line);

	/* Nickname */
	std::cout << "Nickname :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return (std::cout << "je quitte\n", (void)line);
	this->_contacts[_contactCount % 8].setNickName(line);

	/* Phone Number */
	std::cout << "Phone Number :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return (std::cout << "je quitte\n", (void)line);
	this->_contacts[_contactCount % 8].setPhoneNumber(line);

	/* Darkest Secret*/
	std::cout << "Darkest Secret :" << std::endl;
	getline(std::cin, line);
	if (std::cin.eof()) 
		return (std::cout << "je quitte\n", (void)line);
	this->_contacts[_contactCount % 8].setSecret(line);

	this->_contactCount++;
}

void PhoneBook::chooseContact()
{
	std::string index;

	std::cout << "entre l'index :";
	getline(std::cin, index);
	Contact contact = this->getContact(atoi(index.c_str()));
	contact.display();
	std::cout << contact.getSecret(index) << std::endl;
}
