/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:21:32 by motroian          #+#    #+#             */
/*   Updated: 2023/12/05 18:33:39 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>


class Fixed{
	public :
		Fixed();
		~Fixed();
		Fixed(const Fixed &rhs);
		Fixed &operator= (const Fixed &rhs );

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private :
		int	_fixed;
		static const int  _stock = 8;
		
};

#endif