/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:32:06 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:35:33 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception> 
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class Robot : public AForm
{
	public :
		Robot();
		Robot(std::string name);
		Robot(const Robot &rhs);
		Robot &operator=(const Robot &rhs);
		~Robot();
		int getGradeEx();
		std::string getName();
		void execute(Bureaucrat const &executor);
	private :
		std::string	_target;
		int			_gradeEx;
};

#endif