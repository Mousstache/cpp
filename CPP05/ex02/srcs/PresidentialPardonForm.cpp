/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:50:25 by motroian          #+#    #+#             */
/*   Updated: 2023/12/17 06:33:47 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialForm.hpp"
#include "Bureaucrat.hpp"

Presidential::Presidential() : _name("default"), _gradeSigned(25), _gradeEx(5), _signed(false){}

Presidential::Presidential(std::string name, int gradeEx, int gradeSigned) : _name(name)
{
	_signed = false;
	if (gradeSigned < 1 || gradeEx < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeEx > 150)
		throw  GradeTooLowException();
	_gradeSigned = gradeSigned;
	_gradeEx = gradeEx;
}

Presidential::Presidential(const Presidential &rhs)
{
	*this = rhs;
}

Presidential& Presidential::operator=(const Presidential &rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_signed = rhs.getSigned();
		_gradeSign = rhs.getGradeSign();
		_gradeEx = rhs.getGradeEx();
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Presidential& Presidential)
{
	std::cout << Presidential.getName() 
			  << Presidential.getGradeSign() << ", Presidential grade need to sign"
			  << Presidential.getGradeEx() << ", Presidential grade need to execute"
			  << Presidential.getSigned() << ", Presidential is signed?" 
			  << std::endl;
    return os;
}

Form::~Form()
{}

void Presidential::pardon(std::string target)
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}