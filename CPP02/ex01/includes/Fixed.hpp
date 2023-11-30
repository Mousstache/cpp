/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:21:32 by motroian          #+#    #+#             */
/*   Updated: 2023/11/29 22:38:57 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
#include <cmath>

class Fixed{
	public :
		Fixed(){};
		Fixed(const int nb){_fixed = nb << _stock;};
		Fixed(const float nb){_fixed = roundf(nb * (float)(1 << _stock));};
		Fixed(const Fixed &rhs);
		Fixed &operator= (const Fixed &rhs);
		~Fixed(){};
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private :
		int	_fixed;
		static const int  _stock = 8;
		
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixe);

#endif