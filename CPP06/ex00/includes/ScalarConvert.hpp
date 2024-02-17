/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:02:05 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:25:48 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

# include <fstream>
# include <sstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception> 
# include <limits.h> 
# include <float.h>
# include <cmath>



class ScalarConvert
{
	public :
		~ScalarConvert();
		static void convert(std::string input);
	private :
		ScalarConvert();
};

#endif