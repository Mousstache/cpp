/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:32:52 by motroian          #+#    #+#             */
/*   Updated: 2023/12/21 20:47:10 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
	uintptr_t ptr = 0;
	Data data(34);
	Data *donne;

	Serializer seri;
	ptr = seri.serialize(&data);
	std::cout << ptr << std::endl;
	donne = seri.deserialize(ptr);
	std::cout << donne->value << std::endl;
}