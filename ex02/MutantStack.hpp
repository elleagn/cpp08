/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:41:09 by gozon             #+#    #+#             */
/*   Updated: 2025/07/24 17:22:22 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"

#include <stack>
#include <cstddef>

template<typename T>
class MutantStack: public std::stack<T> {

    public:

        MutantStack();
        MutantStack(const MutantStack& src);
        ~MutantStack();

        MutantStack& operator=(const MutantStack& src);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin();
        iterator end();

};

#include "MutantStack.tpp"

#endif
