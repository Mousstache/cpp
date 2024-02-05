/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:21 by motroian          #+#    #+#             */
/*   Updated: 2024/01/17 22:56:27 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define  CURE_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(std::string name);
		Cure(const Cure &rhs);
		Cure &operator=(const Cure &rhs);
		~Cure();
		void use(ICharacter& target);
		Cure* clone()const; 
	protected :
		std::string _Type;
};

#endif