/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:29:34 by motroian          #+#    #+#             */
/*   Updated: 2023/12/04 17:35:51 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("WARING");
}