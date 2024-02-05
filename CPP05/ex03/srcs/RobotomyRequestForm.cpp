/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:31:46 by motroian          #+#    #+#             */
/*   Updated: 2023/12/19 18:38:51 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotmyRequestForm", 72, 45), _target("default_target"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotmyRequestForm", 72, 45), _target(target + "_target")
{
	_gradeEx = 45;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
{
	*this = rhs;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeEx = rhs._gradeEx;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}
void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() < this->_gradeEx)
		throw AForm::GradeTooLowException();
	srand(time(0));
	(rand() % 2 == 0) ? std::cout << this->_target << " has been robotomized successfully\n" : std::cout << this->_target << " robotomization failed\n";
		std::cout << executor.getName() << " Get Robotomised" << std::endl;
}