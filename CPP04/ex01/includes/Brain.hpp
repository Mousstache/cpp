/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:10:55 by motroian          #+#    #+#             */
/*   Updated: 2023/12/07 18:35:54 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define  BRAIN_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "Animal.hpp"


class Brain : public Animal
{
	public :
		Brain();
		Brain(std::string name);
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		~Brain();
	protected :
		std::string ideas[100];
};

#endif