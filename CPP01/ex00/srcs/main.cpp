/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:14:44 by motroian          #+#    #+#             */
/*   Updated: 2023/11/28 18:16:21 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// Zombie zombie;
	Zombie *mouss;
	mouss = newZombie("mouss");
	mouss->announce();
	delete mouss;
	randomChump("cyril");
	// zombie.setName("mouss");
	// zombie.announce();
}