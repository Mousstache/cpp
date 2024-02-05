/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:58:19 by motroian          #+#    #+#             */
/*   Updated: 2024/01/03 19:38:41 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "MutantStack.hpp"



int main() {
    // Utilisation de la nouvelle classe MutantStack
    MutantStack<int> mutantStack;

    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(3);

    // Utilisation des itérateurs
    std::cout << "MutantStack content: ";
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}