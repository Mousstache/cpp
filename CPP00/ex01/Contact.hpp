/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:20:32 by motroian          #+#    #+#             */
/*   Updated: 2023/11/17 21:59:48 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
private:
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    std::string firstName;

public:
    // Constructeur
    Contact();
    ~Contact();
    void setFirstName(std::string str)
    {
        this->firstName = str;
    };
    void setLastName(std::string str)
    {
        this->lastName = str;
    };
    void setNickName(std::string str)
    {
        this->nickname = str;
    };
    void setPhoneNumber(std::string str)
    {
        this->phoneNumber = str;
    };
    void setSecret(std::string str)
    {
        this->darkestSecret = str;
    };
    std::string getSecret(std::string str)
    {
        return (this->darkestSecret);
    };
    std::string getFirstName()
    {
        return (this->firstName);
    }
    void display();
    void addContact();

};

#endif