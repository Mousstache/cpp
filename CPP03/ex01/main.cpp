/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:15:58 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 20:28:57 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{
	ScavTrap david("david"), goliath("goliath");
	david.attack(goliath.getName());
	goliath.takeDamage(10);
	goliath.getInfo();
}