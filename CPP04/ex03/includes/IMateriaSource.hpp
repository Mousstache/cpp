/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriasource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:24:31 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 19:27:32 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_HPP
#define IMATERIA_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
#include "ICharacter.hpp"

class IMateria
{
	public :
		IMateria();
		IMateria(std::string name);
		IMateria(const IMateria &rhs);
		IMateria &operator=(const IMateria &rhs);
		virtual ~IMateria();
		std::string getType()const;
		virtual void makeSound()const = 0;
		virtual IMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected :
		std::string _Type;
};

#endif