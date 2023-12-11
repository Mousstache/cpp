/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:12:41 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 16:58:13 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "destructor for : "<< this->name << " called" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->getName() << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}