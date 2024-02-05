/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:24:32 by motroian          #+#    #+#             */
/*   Updated: 2024/01/22 21:45:14 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	
	try
	{
	
	Bureaucrat kratos("kratos", 2);
	Bureaucrat kk("kk", 150);
	std::cout << kk;
		kk.gradeLess();
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat negatif("ng", -10);
	}
	catch(const std::exception& e)
	{
			std::cerr << e.what() << "\n";
	}
	
	try
	{
		Bureaucrat over("ov", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// try
	// {
	// 	kratos.gradePlus();
	// }
	// catch (const std::exception & e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << kkk;

	// try
	// {
	// 	kratos.gradePlus();
	// }
	// catch (const std::exception & e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	
}