/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 21:14:44 by motroian          #+#    #+#             */
/*   Updated: 2023/11/20 21:34:18 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *mouss = zombieHorde(5, "asd");
	for (int i = 0; i <= 4;i++)
		mouss[i].announce();
	(void)mouss;
	delete[] mouss;
}