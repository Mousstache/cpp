/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:06:02 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:33 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Weapon{
	private :
		std::string _type;
	public :
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		std::string getType();
};

#endif