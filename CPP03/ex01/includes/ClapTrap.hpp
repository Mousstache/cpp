/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:13:29 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 18:28:15 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class ClapTrap{
	
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap &operator= (const ClapTrap &rhs);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName();
		
	protected :
		std::string 	_name;
		unsigned int 	_hitPoint;
		unsigned int 	_energyPoint;
		unsigned int 	_attackDamage;
};

#endif

