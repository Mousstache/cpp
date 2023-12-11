/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:52:22 by motroian          #+#    #+#             */
/*   Updated: 2023/12/07 18:38:54 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define  DOG_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"


class Dog : public Animal
{
	public :
		Dog();
		Dog(std::string name);
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		~Dog();
		void makeSound()const;
	private :
		std::string Type;
		Brain* _brain;

};

#endif