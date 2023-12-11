/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:39:41 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:06:13 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strptr = &str;
	std::string &refptr = str;

	std::cout << str << std::endl;
	std::cout << *strptr << std::endl;
	std::cout << refptr << std::endl;

	std::cout << &str << std::endl;
	std::cout << strptr << std::endl;
	std::cout << &refptr << std::endl;
}