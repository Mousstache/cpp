/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:05:46 by motroian          #+#    #+#             */
/*   Updated: 2023/12/17 00:06:11 by motroian         ###   ########.fr       */
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

class Bureaucrat;

class Form
{
	public :
		Form();
		Form(const std::string name, const int gradeEX, const int gradeSign);
		Form(const Form &rhs);
		Form &operator=(const Form &rhs);
		~Form();
		int getGradeSign()const;
		int getGradeEx()const;
		bool getSigned()const;
		const std::string getName()const;
		void beSigned(Bureaucrat& bureaucrat);
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

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif