// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   HumanB.hpp                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/11/20 22:09:09 by motroian          #+#    #+#             */
// /*   Updated: 2023/11/20 23:53:45 by motroian         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "Weapon.hpp"

class Weapon;

class HumanB{
	private :
		std::string _name;
		Weapon *_weapon;	
	public :
		HumanB(std::string name): _name(name), _weapon(NULL){
			std::cout << "Je suis " << name << std::endl;
		};
		~HumanB(){};
		void attack();
		void setName(std::string str){
			this->_name = str;
		};
		void setWeapon(Weapon& weapon){_weapon = &weapon;};
		std::string getName(){
			return (this->_name);
		};
};


#endif