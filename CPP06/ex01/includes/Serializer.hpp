/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:28:39 by motroian          #+#    #+#             */
/*   Updated: 2024/01/30 20:23:37 by motroian         ###   ########.fr       */
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
	int value;
    Data(int v) : value(v) {}
};

class Serializer
{
	public :
		Serializer();
		// Serializer(std::string name, int grade, int gradeEx);
		// Serializer(const Serializer &rhs);
		// Serializer &operator=(const Serializer &rhs);
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
	private :
};

#endif