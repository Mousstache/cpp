/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:51:45 by motroian          #+#    #+#             */
/*   Updated: 2024/01/18 21:44:33 by motroian         ###   ########.fr       */
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


class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		~WrongCat();
		void makeSound()const;
};

#endif