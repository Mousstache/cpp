/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 23:37:06 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:46:51 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeSign(150), _gradeEx(150){}

AForm::AForm(const std::string name, const int gradeEx, const int gradeSigned): _name(name), _signed(false), _gradeSign(gradeSigned), _gradeEx(gradeEx)
{
	if (gradeSigned < 1 || gradeEx < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeEx > 150)
		throw  GradeTooLowException();
}

AForm::AForm(const AForm &rhs) : _name(rhs._name), _signed(false), _gradeSign(rhs._gradeSign), _gradeEx(rhs._gradeEx)
{
	*this = rhs;
}

AForm& AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		_signed = rhs.getSigned();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	std::cout << AForm.getName() 
			  << AForm.getGradeSign() << ", AForm grade need to sign"
			  << AForm.getGradeEx() << ", AForm grade need to execute"
			  << AForm.getSigned() << ", AForm is signed?" 
			  << std::endl;
    return os;
}

AForm::~AForm()
{}

const char* AForm::GradeTooHighException:: what() const throw()
{
	return "grade too high to sign";
}

const char* AForm::GradeTooLowException:: what() const throw()
{
	return "Grade too low to sign";
}

const std::string AForm::getName()const
{
	return (this->_name);
}

int AForm::getGradeSign()const
{
	return (this->_gradeSign);
}

int AForm::getGradeEx()const
{
	return (this->_gradeEx);
}

bool AForm::getSigned()const
{
	return (this->_signed);
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else if (bureaucrat.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
}