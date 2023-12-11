/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:15:58 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 18:56:19 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	FragTrap david("david"), goliath("goliath");
	david.attack(goliath.getName());
	goliath.takeDamage(100);
	david.attack(goliath.getName());
	goliath.takeDamage(100);
}