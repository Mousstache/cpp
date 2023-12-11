/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:15:58 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 18:17:31 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap david("david"), goliath("goliath");
	david.attack(goliath.getName());
	goliath.takeDamage(10);
	david.attack(goliath.getName());
	goliath.takeDamage(10);
}