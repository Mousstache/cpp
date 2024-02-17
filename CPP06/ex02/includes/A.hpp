/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:07:08 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:31:14 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <fstream>
# include <sstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception>
# include <stdint.h>
# include "Base.hpp"

class A : public Base
{
	public:
		A(){};
		virtual ~A(){};
};

#endif