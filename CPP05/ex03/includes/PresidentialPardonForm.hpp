/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:32:01 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 19:04:53 by motroian         ###   ########.fr       */
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
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class Presidential : public AForm
{
	public :
		Presidential();
		Presidential(std::string name);
		Presidential(const Presidential &rhs);
		Presidential &operator=(const Presidential &rhs);
		~Presidential();
		int getGradeEx();
		std::string getName();
		void execute(Bureaucrat const &executor);
	private :
		std::string			_target;
		int					_gradeEx;
};

#endif