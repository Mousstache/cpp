/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:13:29 by motroian          #+#    #+#             */
/*   Updated: 2023/11/30 23:43:07 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class ScavTrap{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &rhs);
		ScavTrap &operator= (const ScavTrap &rhs);
		~ScavTrap(){std::cout << "destructor called" << std::endl;};
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(){return (this->_name);};
		
	private :
		std::string 	_name;
		unsigned int 	_hitPoint;
		unsigned int 	_energyPoint;
		unsigned int 	_attackDamage;
};

#endif

