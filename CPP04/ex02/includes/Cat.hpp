/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:51:50 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 18:14:11 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
#define  CAT_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "Animal.hpp"


class Cat : public Animal
{
	public :
		Cat();
		Cat(std::string name);
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		~Cat();
		void makeSound()const;
	protected :
		std::string _Type;
};

#endif