/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:21:32 by motroian          #+#    #+#             */
/*   Updated: 2023/11/29 18:46:35 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

// fix num1, num2

// num1 = num2

class Fixed{
	public :
		Fixed():_fixed(0){};
		~Fixed(){};
		Fixed(const Fixed &rhs);
		Fixed &operator= (const Fixed &rhs );

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private :
		int	_fixed;
		static const int  _stock = 8;
		
};

#endif