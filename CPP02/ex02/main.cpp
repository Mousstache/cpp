/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:15:10 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 20:53:37 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(3);
	Fixed d(5);

	std::cout << "a is fixed at " << a << std::endl;
	std::cout << "b is fixed at " << b << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	
	std::cout << "c is fixed at " << c << std::endl;
	std::cout << "d is fixed at " << d << std::endl;

	std::cout << "c + d = " << c + d << std::endl;
	std::cout << "c - d = " << c - d << std::endl;
	std::cout << "c * d = " << c * d << std::endl;
	std::cout << "c / d = " << c / d << std::endl;
	
	std::cout << "c >= d " << ((c >= d) ? true : false ) << std::endl;
	std::cout << "c > d " << ((c > d) ? true : false ) << std::endl;
	std::cout << "c < d " << ((c < d) ? true : false ) << std::endl;
	std::cout << "c <= d " << ((c <= d) ? true : false ) << std::endl;
	std::cout << "c == d " << ((c == d) ? true : false ) << std::endl;
	std::cout << "c != d " << ((c != d) ? true : false ) << std::endl;

	return (0);
}

// int main( void ) {
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;
// }