/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:47:32 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 18:18:09 by motroian         ###   ########.fr       */
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
		Animal(const Animal &rhs);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();
		std::string getType()const;
		virtual void makeSound()const; 
	protected :
		std::string _Type;
};

#endif