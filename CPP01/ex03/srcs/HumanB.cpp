/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:08:27 by motroian          #+#    #+#             */
/*   Updated: 2023/11/21 21:28:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (_weapon == NULL) {
        std::cout << _name << " attacks with bare hands!" << std::endl;
    } else {
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    }
}