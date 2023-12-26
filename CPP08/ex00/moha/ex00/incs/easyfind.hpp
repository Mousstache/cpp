/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgamil <mgamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:27:23 by mgamil            #+#    #+#             */
/*   Updated: 2023/07/20 18:44:50 by mgamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <stdexcept>

class ErrorTabException : public std::exception {
    public :
        virtual const char * what() const throw() {
            return ("value not found in container");
        }
};

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
    {
        throw ErrorTabException();
    }
    return it;
}
#endif
