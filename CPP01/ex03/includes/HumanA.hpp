/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:09:14 by motroian          #+#    #+#             */
/*   Updated: 2023/11/21 19:42:01 by motroian         ###   ########.fr       */
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
		HumanA(std::string name, Weapon arme): _name(name), _weapon(arme) {
			std::cout << "Je suis " << name << std::endl;
		};
		~HumanA(){}
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