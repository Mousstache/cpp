/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:02:05 by motroian          #+#    #+#             */
/*   Updated: 2023/12/19 22:04:30 by motroian         ###   ########.fr       */
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


class ScalarConvert
{
	public :
		ScalarConvert();
		ScalarConvert(std::string name, int grade, int gradeEx);
		ScalarConvert(const ScalarConvert &rhs);
		ScalarConvert &operator=(const ScalarConvert &rhs);
		~ScalarConvert();
		void convert(std::string input);
	private :
};

#endif