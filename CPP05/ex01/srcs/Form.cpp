/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 22:08:40 by motroian          #+#    #+#             */
/*   Updated: 2023/12/17 02:13:13 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _signed(false), _gradeSign(150), _gradeEx(150){}

Form::Form(const std::string name, const int gradeEx, const int gradeSigned): _name(name), _signed(false), _gradeSign(gradeSigned), _gradeEx(gradeEx)
{
	if (gradeSigned < 1 || gradeEx < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeEx > 150)
		throw  GradeTooLowException();
}

Form::Form(const Form &rhs) : _name(rhs._name), _signed(false), _gradeSign(rhs._gradeSign), _gradeEx(rhs._gradeEx)
{
	*this = rhs;
}

Form& Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		_signed = rhs.getSigned();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
	std::cout << Form.getName() 
			  << Form.getGradeSign() << ", Form grade need to sign"
			  << Form.getGradeEx() << ", Form grade need to execute"
			  << Form.getSigned() << ", Form is signed?" 
			  << std::endl;
    return os;
}

Form::~Form()
{}

const char* Form::GradeTooHighException:: what() const throw()
{
	return "grade too high to sign";
}

const char* Form::GradeTooLowException:: what() const throw()
{
	return "Grade too low to sign";
}

const std::string Form::getName()const
{
	return (this->_name);
}

int Form::getGradeSign()const
{
	return (this->_gradeSign);
}

int Form::getGradeEx()const
{
	return (this->_gradeEx);
}

bool Form::getSigned()const
{
	return (this->_signed);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
}
