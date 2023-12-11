/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:50:41 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:08:51 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main ()
{
	const wrongAnimal* meta = new wrongAnimal();
	const Animal* j = new Dog();
	//const Animal* h = new Cat();
	const wrongAnimal* i = new wrongCat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// h->makeSound();
	meta->makeSound();
	delete j;
	delete meta;
	delete i;
	// delete h;
	return 0;
}