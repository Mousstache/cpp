/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 23:38:54 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:51:24 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("default"), _grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw  GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	*this = rhs;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		_grade = rhs.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return os;
}

Bureaucrat::~Bureaucrat()
{}

int Bureaucrat::getGrade()const
{
	return (this->_grade);
}

const std::string Bureaucrat::getName()const
{
	return (this->_name);
}

void Bureaucrat::gradePlus()
{
	if (this->_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade -= 1;
	std::cout << "Grade plus !" << std::endl;
}

void Bureaucrat::gradeLess()
{
	if (this->_grade == 150)
	{
		throw  Bureaucrat::GradeTooLowException();
	}
	this->_grade += 1;
	std::cout << "Down grade loooooser" << std::endl;
}

const char* Bureaucrat::GradeTooHighException:: what() const throw()
{
	return "grade too high";
}

const char* Bureaucrat::GradeTooLowException:: what() const throw()
{
	return "Grade too low";
}
void Bureaucrat::signForm(AForm &form)
{
	if (form.getSigned())
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because " << "the grade is not match" << std::endl;
}
