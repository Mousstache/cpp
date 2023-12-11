/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:55:39 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:21:19 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		HumanB jim("Jim");
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
		club = Weapon("club tah sah");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	// Weapon club = Weapon("crude spiked club");
	// HumanA bob("Bob", club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();
}