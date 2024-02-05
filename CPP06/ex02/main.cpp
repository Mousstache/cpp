/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:13:05 by motroian          #+#    #+#             */
/*   Updated: 2023/12/21 22:33:03 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	srand(time(NULL));
	int ranDom = rand() % 3;
	if (ranDom == 0)
		return (new A());
	else if (ranDom == 1)
		return (new B());
	else
		return (new C());
}


void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else 
		std::cout << "Probleme" << std::endl;
}

void identify(Base& p)
{
	identify(&p);
}

int main ()
{
	Base* p;
  
    try
    {
        p = generate();
        identify(p);
        identify(*p);
        delete p ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        delete p;
    }
}