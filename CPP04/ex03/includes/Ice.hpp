/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:11:25 by motroian          #+#    #+#             */
/*   Updated: 2023/12/11 18:25:18 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define  ICE_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class Ice
{
	public :
		Ice();
		Ice(std::string name);
		Ice(const Ice &rhs);
		Ice &operator=(const Ice &rhs);
		virtual ~Ice();
		std::string getType()const;
		virtual void clone ()const; 
	protected :
		std::string _Type;
};

#endif