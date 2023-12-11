/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:29:57 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:30:57 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <fstream>

class Harl{
	private :
		void debug( void );
		void info( void );
 		void warning( void );
		void error( void );
	public :
		Harl();
		~Harl();
		void complain( std::string level );
};

#endif