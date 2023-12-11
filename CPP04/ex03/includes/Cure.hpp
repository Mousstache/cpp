/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:21 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 18:25:28 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define  CURE_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class Cure
{
	public :
		Cure();
		Cure(std::string name);
		Cure(const Cure &rhs);
		Cure &operator=(const Cure &rhs);
		virtual ~Cure();
		std::string getType()const;
		virtual void clone()const; 
	protected :
		std::string _Type;
};

#endif