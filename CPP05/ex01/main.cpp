/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 02:13:34 by motroian          #+#    #+#             */
/*   Updated: 2023/12/17 03:18:47 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat tpassin("tpassin", 2);
	std::cout << tpassin;
	Bureaucrat mouss("moussa", 150);
	std::cout << mouss;
	Form form("form", 145, 34);
	try
	{
		form.beSigned(mouss);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}