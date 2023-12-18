/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:50:25 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:27:51 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

Presidential::Presidential() : AForm("PresidentialPardonForm", 25, 5), _target("default_target")
{
}

Presidential::Presidential(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target + "_target")
{
	this->_gradeEx = 5;
}

Presidential::Presidential(const Presidential &rhs)
{
	*this = rhs;
}

Presidential& Presidential::operator=(const Presidential &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeEx = rhs._gradeEx;
	}
	return (*this);
}

Presidential::~Presidential()
{}

void Presidential::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() < this->_gradeEx)
		throw AForm::GradeTooLowException();
	std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}
