/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:30:19 by motroian          #+#    #+#             */
/*   Updated: 2023/11/28 18:12:00 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
	{
		std::cout << "c'est pas positif" << std::endl;
		return (NULL);
	}
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N;i++)
		zombie[i].setName(name);
	return (zombie);
}