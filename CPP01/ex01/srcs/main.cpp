/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:14:44 by motroian          #+#    #+#             */
/*   Updated: 2023/11/28 18:13:27 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *mouss = zombieHorde(-1, "asd");
	if (!mouss)
		return (1);
	for (int i = 0; i <= 4;i++)
		mouss[i].announce();
	(void)mouss;
	delete[] mouss;
}