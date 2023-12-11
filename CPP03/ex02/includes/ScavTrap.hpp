/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 00:02:15 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 18:53:53 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &rhs);
		ScavTrap &operator= (const ScavTrap &rhs);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
};

#endif
