/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:31:49 by motroian          #+#    #+#             */
/*   Updated: 2023/12/18 20:45:02 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("RobotmyRequestForm", 145, 137), _target("default_target"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("RobotmyRequestForm", 145, 137), _target(target + "_target")
{
	_gradeEx = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_gradeEx = rhs._gradeEx;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() < this->_gradeEx)
		throw GradeTooLowException();
	std::ofstream file;
	file.open(this->_target.c_str());
	if (file.is_open())
	{
		file << "\n\n";
		for (int i = 0; i < 3; i++)
		{
			file << "		                  # #### ####\n";
			file << "		                ### \\/#|### |/####\n";
			file << "		               ## \\/#/ \\||/##/_/##/_#\n";
			file << "		             ###  \\/###|/ \\/ # ###\n";
			file << "		           ##_\\_\\#\\_\\## | #/###_/_####\n";
			file << "		          ## #### # \\ #| /  #### ##/##\n";
			file << "		           __#_--###`  |{,###---###-~\n";
			file << "		                     \\ }{\n";
			file << "		                      }}{\n";
			file << "		                      }}{\n";
			file << "		                      {{}\n";
			file << "		                  # #### ####" << std::endl << std::endl << std::endl;
		}
	}
	else 
		std::cerr << "Error: could not open file" << std::endl;
	file.close();
}