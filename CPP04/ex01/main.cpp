/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:50:41 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:12:38 by motroian         ###   ########.fr       */
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
	return (0);
	// Animal* meta = new Animal();
	// Animal *j = new Dog();
	// // Animal* i = new Cat();
	// // std::cout << j->getType() << std::endl;
	// // std::cout << i->getType() << std::endl;
	// // i->makeSound();
	// // j->makeSound();
	// meta->makeSound();
	// return 0;
}