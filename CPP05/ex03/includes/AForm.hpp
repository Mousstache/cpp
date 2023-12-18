/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:36:44 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:28:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception> 
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :
		AForm();
		AForm(std::string name, int grade, int gradeEx);
		AForm(const AForm &rhs);
		AForm &operator=(const AForm &rhs);
		~AForm();
		int getGradeSign()const;
		int getGradeEx()const;
		bool getSigned()const;
		const std::string getName()const;
		void beSigned(Bureaucrat& bureaucrat);
		virtual void execute(Bureaucrat const &executor) = 0;
		class GradeTooLowException: public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
	private :
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeEx;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif