/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:09:05 by motroian          #+#    #+#             */
/*   Updated: 2024/01/17 22:28:02 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define  MATERIASOURCE_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		MateriaSource(std::string name);
		MateriaSource(const MateriaSource &rhs);
		MateriaSource &operator=(const MateriaSource &rhs);
		virtual ~MateriaSource();
		std::string getType()const;
		MateriaSource* clone() const;
		void use(ICharacter& target);
		void learnMateria(AMateria* materia);
		AMateria *createMateria(std::string const &type);

	protected :
		AMateria* _materias[4];
		int _nbMateria;
		std::string _Type;
		std::string _name;
};


#endif