/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:59:16 by gozon             #+#    #+#             */
/*   Updated: 2025/07/24 17:09:44 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


/* ************************ CONSTRUCTORS / DESTRUCTORS ********************** */

template<typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {

}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& src): std::stack<T>(src) {

}

template<typename T>
MutantStack<T>::~MutantStack() {

}

/* ************************************************************************** */

/* **************************** OPERATORS *********************************** */

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& src) {

    if (this != &src)
        *this = std::stack<T>::operator=(src);
    return (*this);

}

/* ************************************************************************** */

/* ***************************** METHODS ************************************ */

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {

    return(std::stack<T>::c.begin());

}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {

    return(std::stack<T>::c.end());

}

/* ************************************************************************** */
