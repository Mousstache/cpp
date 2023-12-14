/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:25 by motroian          #+#    #+#             */
/*   Updated: 2023/12/12 20:58:33 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define  ICE_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(std::string name);
		Ice(const Ice &rhs);
		Ice &operator=(const Ice &rhs);
		~Ice();
		std::string getType()const;
		void use(ICharacter& target);
		AMateria* clone() const; 
	protected :
		std::string _Type;
};

#endif