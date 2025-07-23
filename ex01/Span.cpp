/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:12:07 by gozon             #+#    #+#             */
/*   Updated: 2025/07/23 18:39:52 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ************************ CONSTRUCTORS / DESTRUCTORS ********************** */

Span::Span(): maxSize(0) {

}

Span::Span(size_t N): maxSize(N) {

}

Span::Span(const Span& src): vect(src.vect), maxSize(src.maxSize) {
}

Span::~Span() {

}

/* ************************************************************************** */

/* *********************** OPERATORS **************************************** */

Span& Span::operator=(const Span& src) {
    vect = src.vect;
    maxSize = src.maxSize;
    return (*this);
}

/* ************************************************************************** */


/* ************************** EXCEPTIONS ************************************ */

const char* Span::FullSpanException::what() const throw() {
    return ("Span already full.");
}

/* ************************************************************************** */

/* **************************** METHODS ************************************* */

void Span::addNumber(int number) {

    if (vect.size() == maxSize)
        throw FullSpanException();
    vect.insert(vect.end(), number);

}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) {

    if(std::distance(first, last) + vect.size() > maxSize)
        throw FullSpanException();
    vect.insert(vect.end(), first, last);

}

unsigned int Span::longestSpan() const {

    int min;
    int max;

    min = *std::min_element(vect.begin(), vect.end());
    max = *std::max_element(vect.begin(), vect.end());

    return (static_cast<unsigned int>(max - min));

}

unsigned int Span::shortestSpan() const {

    std::vector<int>    sorted(vect);
    unsigned int        shortest;
    unsigned int        current;


    std::sort(sorted.begin(), sorted.end());
    for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++) {
        current = static_cast<unsigned int>(*(it + 1) - *it);
        if (!current)
            return (0);
        shortest = std::min(shortest, current);
    }
    return (shortest);

}
/* ************************************************************************** */
