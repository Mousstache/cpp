/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:10:55 by motroian          #+#    #+#             */
/*   Updated: 2024/01/16 20:35:34 by motroian         ###   ########.fr       */
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


class Brain
{
	public :
		Brain();
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		~Brain();
	protected :
		std::string _ideas[100];
};

#endif