/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:08:27 by motroian          #+#    #+#             */
/*   Updated: 2024/01/25 23:08:43 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "Je suis " << name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor called" << std::endl;
}

void HumanB::attack()
{
	if (_weapon == NULL) {
        std::cout << _name << " attacks with bare hands!" << std::endl;
    } else {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }
}