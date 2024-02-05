/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:27:01 by motroian          #+#    #+#             */
/*   Updated: 2023/12/19 18:49:13 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "AForm.hpp"

class Intern
{
	public :
		Intern();
		Intern(const Intern &rhs);
		Intern &operator=(const Intern &rhs);
		~Intern();
		AForm* makeForm(std::string const & name, std::string const & target);
		AForm* EXRobotomyRequestForm(std::string const & target);
		AForm* EXPresidentialPardonForm(std::string const & target);
		AForm* EXShrubberyCreationForm(std::string const & target);
	private :
		std::string form[3];
		AForm* (Intern::*formFunc[3])(std::string const & target);
};

#endif