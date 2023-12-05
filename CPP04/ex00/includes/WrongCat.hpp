/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:51:45 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 23:51:18 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define  WRONGCAT_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "Animal.hpp"
# include "WrongAnimal.hpp"


class wrongCat : public wrongAnimal
{
	public :
		wrongCat();
		wrongCat(std::string name);
		wrongCat(const wrongCat &rhs);
		wrongCat &operator=(const wrongCat &rhs);
		~wrongCat();
		void makeSound()const;
	protected :
		std::string _Type;
};

#endif