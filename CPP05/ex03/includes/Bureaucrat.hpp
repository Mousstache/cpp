/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:38:57 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:50:27 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception> 
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		int getGrade()const;
		const std::string getName()const;
		void gradePlus();
		void gradeLess();
		void signForm(AForm &form);
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
		const std::string  _name;
		int				_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif