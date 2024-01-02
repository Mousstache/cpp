/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motroian <motroian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:58:19 by motroian          #+#    #+#             */
/*   Updated: 2024/01/02 23:13:58 by motroian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "MutantStack.hpp"

#include <stack>
#include <iostream>

template <typename T>
class MutantStack {
private:
    std::stack<T> internalStack;

public:
    // Ajoutez des constructeurs, destructeurs ou d'autres fonctions nécessaires

    // Fonction pour ajouter un élément à la pile
    void push(const T& value) {
        internalStack.push(value);
    }

    // Fonction pour retirer l'élément du dessus de la pile
    void pop() {
        internalStack.pop();
    }

    // Fonction pour obtenir l'élément du dessus de la pile
    T& top() {
        return internalStack.top();
    }

    // Fonction pour vérifier si la pile est vide
    bool empty() const {
        return internalStack.empty();
    }

    // Fonction pour obtenir la taille de la pile
    size_t size() const {
        return internalStack.size();
    }
	

    // Itérateur pour simuler begin()
    class Iterator {
    private:
        typename std::stack<T>::container_type::iterator iter;

    public:
        Iterator(typename std::stack<T>::container_type::iterator it) : iter(it) {}

        T& operator*() {
            return *iter;
        }

        Iterator& operator++() {
            ++iter;
            return *this;
        }

        bool operator!=(const Iterator& other) const {
            return iter != other.iter;
        }
    };

    Iterator begin() {
        return Iterator(internalStack.c.begin());
    }

    // Itérateur pour simuler end()
    Iterator end() {
        return Iterator(internalStack.c.end());
    }
};

int main() {
    // Utilisation de la nouvelle classe MutantStack
    MutantStack<int> mutantStack;

    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(3);

    // Utilisation des itérateurs
    std::cout << "MutantStack content: ";
    for (MutantStack<int>::Iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}