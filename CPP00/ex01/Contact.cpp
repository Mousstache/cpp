/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:26:15 by motroian          #+#    #+#             */
/*   Updated: 2023/11/17 21:31:30 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
	// std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact()
{
	// std::cout << "Contact destructor called" << std::endl;
}

std::string checklen(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Contact::display()
{
	std::cout << std::setw(10) << checklen(this->firstName) << "|"
    << std::setw(10) << checklen(this->lastName) << "|"
    << std::setw(10) << checklen(this->nickname) << "|"
    << std::setw(10) << checklen(this->phoneNumber) << "|"
    << std::endl;
}


