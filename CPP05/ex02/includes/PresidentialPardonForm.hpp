/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:32:01 by motroian          #+#    #+#             */
/*   Updated: 2023/12/16 23:34:22 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALFORM_HPP
# define PRESIDENTIALFORM_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception> 
# include "Bureaucrat.hpp"

class Bureaucrat;

class Presidential
{
	public :
		Presidential();
		Presidential(std::string name, int grade);
		Presidential(const Presidential &rhs);
		Presidential &operator=(const Presidential &rhs);
		~Presidential();
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