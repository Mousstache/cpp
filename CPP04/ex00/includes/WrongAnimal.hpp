/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:51:51 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:09:28 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define  WRONGANIMAL_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class wrongAnimal
{
	public :
		wrongAnimal();
		wrongAnimal(std::string name);
		wrongAnimal(const wrongAnimal &rhs);
		wrongAnimal &operator=(const wrongAnimal &rhs);
		virtual ~wrongAnimal();
		virtual void makeSound()const;
		std::string getType()const;
	protected :
		std::string _Type;
};

#endif