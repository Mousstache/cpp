/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:32:52 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:29:08 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
	// Serializer serialize;
	Data data_one;
	Data *data_two;
	uintptr_t ptr = 0;

	data_one.name = "Mouss";
	data_one.age = 21;
	std::cout << "Data of data_one : \n";
	std::cout << "Name : " << data_one.name << "\n"; 
	std::cout << "Age : " << data_one.age << "\n\n";
	std::cout << "uintptr_t value before serialize : " << ptr << "\n";
	ptr = Serializer::serialize(&data_one);
	std::cout << "uintptr_t value after serialize : " << ptr << "\n";
	std::cout << "Memory adress of data_one : " << &data_one << "\n";
	std::cout << "Memory adress of data_two before deserialize data_one in data_two : " << data_two << "\n";
	data_two = Serializer::deserialize(ptr);
	std::cout << "Memory adress of data_two after deserialize data_one in data_two : " << data_two << "\n";

	std::cout << "\n";
	std::cout << "Data of data_two : \n";
	std::cout << "Name : " << data_two->name << "\n"; 
	std::cout << "Age : " << data_two->age << std::endl;
}