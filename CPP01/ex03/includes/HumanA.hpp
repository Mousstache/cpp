/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:09:14 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:11:38 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "Weapon.hpp"

class Weapon;

class HumanA{
	private :
		std::string _name;
		Weapon _weapon;	
	public :
		HumanA(std::string name, Weapon arme);
		~HumanA();
		void attack();
		void setName(std::string str){
			this->_name = str;
		};
		std::string getName(){
			return (this->_name);
		};
		Weapon getWeapon(){
			return (_weapon);
		};
};


#endif