/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:15:10 by motroian          #+#    #+#             */
/*   Updated: 2023/11/30 20:11:07 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main ()
// {
// 	Fixed a(22), b(14);
// 	// a = a + b;
// 	std::cout << a << std::endl;
// 	std::cout << "+ " << a + b << std::endl;
// 	std::cout << "/ " << a / b << std::endl;
// 	std::cout << "- " << a - b << std::endl;
// 	std::cout << "* " << a * b << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << "a == b " << ((a == b) ? true : false ) << std::endl;
// 	std::cout << Fixed::min(a, b) << std::endl;
// 	// std::cout << max(a, b) << std::endl;
// 	// std::cout << "== " << a == b << std::endl;
// 	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	// std::cout << a << std::endl;
// 	// std::cout << ++a << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << a++ << std::endl;
// 	// std::cout << a << std::endl;
// 	// std::cout << b << std::endl;
// 	// std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
}