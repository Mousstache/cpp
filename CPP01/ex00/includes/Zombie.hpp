/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:10:05 by motroian          #+#    #+#             */
/*   Updated: 2023/11/20 18:45:39 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>


class Zombie{
	public :
		Zombie(){};
		~Zombie(){};
		void announce();
		std::string getName()
		{
			return (this->name);
		};
		void setName(std::string str)
		{
			this->name = str; 
		};

	private :
		std::string name;
};

void randomChump(std::string str);
Zombie* newZombie(std::string name);

#endif