/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:15:58 by motroian          #+#    #+#             */
/*   Updated: 2023/12/01 21:20:36 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	FragTrap david("david"), goliath("goliath");
	david.attack(goliath.getName());
	goliath.takeDamage(30);
	goliath.getInfo();
}