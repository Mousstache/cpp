/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:14:44 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:02:29 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int def = 2;
	Zombie *mouss = zombieHorde(def, "asd");
	if (!mouss)
		return (1);
	for (int i = 0; i < def;i++)
		mouss[i].announce();
	delete[] mouss;
}