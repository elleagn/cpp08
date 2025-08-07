/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:24:06 by gozon             #+#    #+#             */
/*   Updated: 2025/07/23 18:24:57 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#define BIG 10000

int main()
{
    {

        Span span(10);

        std::cout << "\nTest 1 - Empty span" << std::endl;
        try {
            span.shortestSpan();
        }
        catch (std::exception& e) {
            std::cout << "Exception thrown: shortestSpan: " << e.what() << std::endl;
        }
        try {
            span.longestSpan();
        }
        catch (std::exception& e) {
            std::cout << "Exception thrown: longestSpan: " << e.what() << std::endl;
        }

        std::cout << "\nTest 2 - 10 random numbers" << std::endl;
        std::cout << "Span: ";
        int nb;
        srand(time(NULL));
        for (int i = 0; i < 10; i++) {
            nb = rand() % 101;
            std::cout << nb << " ";
            span.addNumber(nb);
        }
        std::cout << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;

    }
    {
        Span span(BIG);
        std::cout << "\nTest 3 - Big span" << std::endl;
        srand(time(NULL));
        std::vector<int> nb;
        for (int i = 0; i < BIG; i++) {
            nb.insert(nb.end(), rand() % 1000000);
        }
        span.addNumber(nb.begin(), nb.end());
        std::cout << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
    }
    std::cout << std::endl;
    return (0);
}
