/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:28:39 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:28:05 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <fstream>
# include <sstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception>
# include <stdint.h>

struct Data
{
	int age;
	std::string name;
};

class Serializer
{
	public :
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private :
		Serializer();
};

#endif