/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:13 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 19:30:08 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
#include "ICharacter.hpp"

class AMateria
{
	public :
		AMateria();
		AMateria(std::string name);
		AMateria(const AMateria &rhs);
		AMateria &operator=(const AMateria &rhs);
		virtual ~AMateria();
		std::string getType()const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected :
		std::string _Type;
};

#endif