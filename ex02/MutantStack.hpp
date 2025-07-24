/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 09:41:09 by gozon             #+#    #+#             */
/*   Updated: 2025/07/24 11:23:13 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <cstddef>

template<typename T>
class MutantStack: public std::stack<T> {

    public:
        class Iterator;

};


template<typename T>
struct MutantStack<T>::Iterator {

    typedef std::bidirectional_iterator_tag iterator_category;
    typedef std::ptrdiff_t difference_type;
    typedef T value_type;
    typedef T* pointer;
    typedef T& reference;

    public:

        // Constructors / destructors
        Iterator();
        Iterator(pointer ptr);
        Iterator(const Iterator& src);
        ~Iterator();

        // Operators
        Iterator&   operator=(const Iterator& src);
        reference   operator*() const;
        pointer     operator->();
        Iterator&   operator++();
        Iterator&   operator++(int);
        Iterator&   operator--();
        Iterator&   operator--(int);
        bool        operator==(const Iterator& it) const;
        bool        operator!=(const Iterator& it) const;

    private:

        ptr;
};

#include "MutantStack.tpp"

#endif
