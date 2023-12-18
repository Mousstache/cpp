/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:31:47 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:44:54 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRUBBERYCREATIONFORM_HPP
# define SRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception> 
# include "Bureaucrat.hpp"
# include "AForm.hpp"

class AForm;

class ShrubberyCreationForm : public AForm
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
		int getGradeEx();
		std::string getName();
		void execute(Bureaucrat const &executor);
	private :
		std::string			_target;
		int					_gradeEx;
};

#endif