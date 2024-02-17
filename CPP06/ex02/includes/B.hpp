/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:08:01 by motroian          #+#    #+#             */
/*   Updated: 2024/02/17 20:31:08 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <fstream>
# include <sstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include <exception>
# include <stdint.h>
# include "Base.hpp"

class B : public Base
{
	public:
		B(){};
		virtual ~B(){};
};

#endif