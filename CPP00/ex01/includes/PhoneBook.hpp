/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:42:35 by motroian          #+#    #+#             */
/*   Updated: 2023/11/17 21:00:23 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Contact;

class PhoneBook {
private:
    Contact _contacts[8];
    int     _contactCount;

public:

    PhoneBook();
    ~PhoneBook();
    void addContact();
    void display();
    void remplir();
    void chooseContact();
    int getContactCount()
    {
        if (this->_contactCount > 8)
            return (8);
        return (this->_contactCount);
    }
    Contact getContact(int i)
    {
        return (_contacts[i]);
    }
    void Display();
};

# endif

