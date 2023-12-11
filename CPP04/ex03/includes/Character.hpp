/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:17 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 20:00:05 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define  CHARACTER_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "AMateria.hpp"

class Character
{
	public :
		Character();
		Character(std::string name);
		Character(const Character &rhs);
		Character &operator=(const Character &rhs);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target);
	protected :
		AMateria* _item[4];
		std::string _Type;
};

#endif