/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:47:32 by motroian          #+#    #+#             */
/*   Updated: 2024/01/16 21:34:12 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define  ANIMAL_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class Animal
{
	public :
		Animal();
		Animal(std::string name);
		Animal(const Animal &rhs);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();
		std::string getType()const;
		virtual void makeSound()const = 0;
	protected :
		std::string _Type;
};

#endif