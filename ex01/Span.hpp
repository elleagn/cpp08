/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:02:19 by gozon             #+#    #+#             */
/*   Updated: 2025/07/23 18:37:24 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>

class Span {

    private:

    std::vector<int>    vect;
    size_t              maxSize;

    Span();

    public:

        Span(size_t N);
        Span(const Span& src);
        ~Span();

        Span& operator=(const Span& src);

        void addNumber(int number);
        void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        class FullSpanException: public std::exception {
            const char* what() const throw();
        };


};

#endif
