/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:50:41 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 17:03:19 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main ()
{
	Animal* animal[100];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animal[i] = new Dog;
		else
			animal[i] = new Cat;
	}
	for (int i = 0; i < 10; i++)
		delete animal[i];
	std::cout << std::endl;
	Animal* cat = new Cat();
	Animal* gatito;
	gatito = cat;
	delete gatito;
	return (0);
}
