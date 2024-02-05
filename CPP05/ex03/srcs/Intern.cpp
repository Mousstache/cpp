/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:24:25 by motroian          #+#    #+#             */
/*   Updated: 2023/12/19 18:50:05 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern()
{
	form[0] = "PresidentialPardonForm";
	form[1] = "RobotomyRequestForm";
	form[2] = "ShrubberyCreationForm";

	formFunc[0] = &Intern::EXRobotomyRequestForm; 
	formFunc[1] = &Intern::EXShrubberyCreationForm; 
	formFunc[2] = &Intern::EXPresidentialPardonForm;
}

Intern::~Intern()
{}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern& Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
	{
		form[0] = rhs.form[0];
		form[1] = rhs.form[1];
		form[2] = rhs.form[2];

		formFunc[0] = rhs.formFunc[0]; 
		formFunc[1] = rhs.formFunc[1]; 
		formFunc[2] = rhs.formFunc[2];
	}
	return (*this);
}

AForm* Intern::makeForm(std::string const & name, std::string const & target)
{
	for (int i = 0; i < 3;i++)
	{
		if (name == form[i])
			return ((this->*formFunc[i])(target));
	}
	return (0);
}

AForm* Intern::EXRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::EXPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::EXShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}