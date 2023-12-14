/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:17 by motroian          #+#    #+#             */
/*   Updated: 2023/12/14 22:59:56 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define  CHARACTER_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class ICharacter;
class AMateria;

class Character : public ICharacter
{
	public :
		Character();
		Character(std::string name);
		Character(const Character &rhs);
		Character &operator=(const Character &rhs);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	protected :
		AMateria* _item[4];
		std::string _name;
};

#endif