/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:03:58 by motroian          #+#    #+#             */
/*   Updated: 2024/01/19 18:46:35 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/IMateriaSource.hpp"
#include "includes/MateriaSource.hpp"
#include "includes/AMateria.hpp"
#include "includes/Character.hpp"
#include "includes/ICharacter.hpp"
#include "includes/Ice.hpp"
#include "includes/Cure.hpp"

int	main(void)
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->unequip(1);
	delete bob;
	delete me;
	delete src;
	return (0);
}