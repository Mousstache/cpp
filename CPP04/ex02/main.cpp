/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:50:41 by motroian          #+#    #+#             */
/*   Updated: 2023/12/08 21:58:45 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\n↓ BASIC TEST ↓\n\n";
	/* IF I CREATE JUST ANIMAL, IT WILL BE ABSTRACT CLASS I CAN'T CREATE JUST ANIMAL OBJECT */
	// ↓ Exemple of instanciation of abstract class ↓
	// Animal animalTest;
	Animal *first = new Dog();
	Animal *second = new Dog();
	Animal *third = new Cat();
	Animal *fourth = new Cat();
	Animal *animals[4] = {first, second, third, fourth};
	std::string idea[100] = {"Im the first dog", "Kibble", "I love my master"};
	std::string idea2[100] = {"Im the second cat", "Need to eat", "I Want to play with my master"};

	std::cout << "Array of object animals : Dog Dog Cat Cat\n\n";
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();
	std::cout << "\nBRAIN OF FIRST DOG : \n";

	std::cout << "\nBRAIN OF SECOND CAT :\n";

	
	std::cout << std::endl;

	std::string ideacpytest[100] = {"Test cpy", "Test cpy", "Test cpy"};
	std::cout << "\n↓ TEST DEEP COPY CAT ↓\n\n";
	Dog testcpy;
	std::cout << "\nBRAIN OF TESTCPY CAT BEFORE CPY :\n";
	std::cout << std::endl;
	Dog cpy = testcpy;
	std::cout << "\nBRAIN OF CPY CAT:\n";
	
	std::cout << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	return 0;
}