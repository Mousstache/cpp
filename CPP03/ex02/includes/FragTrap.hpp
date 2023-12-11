/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:45:31 by motroian          #+#    #+#             */
/*   Updated: 2023/12/06 19:09:22 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &rhs);
		FragTrap &operator= (const FragTrap &rhs);
		~FragTrap();
		void highFivesGuys(void);
		// void attack(const std::string& target);
};

#endif