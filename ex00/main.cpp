/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:43:01 by gozon             #+#    #+#             */
/*   Updated: 2025/07/23 15:07:13 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
#include <iostream>

int  main(void) {

    std::cout << std::endl;
    std::cout << "Array used for the tests: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << std::endl << std::endl;
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    {
        std::cout << "Part 1 - Vectors\n\n";

        std::vector<int> vect(array, array + sizeof(array) / sizeof(int));
        std::vector<int>::iterator it;

        std::cout << "Test 1 - number 3: ";
        it = easyfind(vect, 3);
        if (it != vect.end() && *it == 3)
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";

        std::cout << "Test 2 - number 10: ";
        it = easyfind(vect, 10);
        if (it != vect.end() && *it == 10)
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";

        std::cout << "Test 3 - number 100: ";
        it = easyfind(vect, 100);
        if (it == vect.end())
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";
    }


    std::cout << std::endl;

    {
        std::cout << "Part 2 - Deque\n\n";

        std::deque<int> deq(array, array + sizeof(array) / sizeof(int));
        std::deque<int>::iterator it;

        std::cout << "Test 1 - number 3: ";
        it = easyfind(deq, 3);
        if (it != deq.end() && *it == 3)
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";

        std::cout << "Test 2 - number 10: ";
        it = easyfind(deq, 10);
        if (it != deq.end() && *it == 10)
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";

        std::cout << "Test 3 - number 100: ";
        it = easyfind(deq, 100);
        if (it == deq.end())
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";
    }

    std::cout << std::endl;

    {
        std::cout << "Part 3 - List\n\n";

        std::list<int> lst(array, array + sizeof(array) / sizeof(int));
        std::list<int>::iterator it;

        std::cout << "Test 1 - number 3: ";
        it = easyfind(lst, 3);
        if (it != lst.end() && *it == 3)
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";

        std::cout << "Test 2 - number 10: ";
        it = easyfind(lst, 10);
        if (it != lst.end() && *it == 10)
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";

        std::cout << "Test 3 - number 100: ";
        it = easyfind(lst, 100);
        if (it == lst.end())
            std::cout << "OK\n";
        else
            std::cout << "FAILED\n";
    }

    std::cout << std::endl;
    return (0);
}
