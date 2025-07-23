/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:02:19 by gozon             #+#    #+#             */
/*   Updated: 2025/07/23 17:11:36 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>

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
        int shortestSpan() const;
        int longestSpan() const;


};

#endif
