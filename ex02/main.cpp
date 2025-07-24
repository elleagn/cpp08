/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:09:58 by gozon             #+#    #+#             */
/*   Updated: 2025/07/24 17:40:37 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << "Test 1 - Push and top: ";

    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    if (lst.back() != mstack.top())
        std::cout << RED << "FAIL";
    else
        std::cout << GREEN << "OK";
    std::cout << RESET << std::endl;


    std::cout << "Test 2 - Pop: ";

    lst.pop_back();
    mstack.pop();
    if (lst.size() != mstack.size())
        std::cout << RED << "FAIL";
    else
        std::cout << GREEN << "OK";
    std::cout << RESET << std::endl;


    std::cout << "Test 3 - Iterators: ";
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    ++lit;
    --lit;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        if (*it != *lit)
            break;
        ++lit;
        ++it;
    }
    if (lit != lite)
         std::cout << RED << "FAIL";
    else
        std::cout << GREEN << "OK";
    std::cout << RESET << std::endl;

    std::stack<int> s(mstack);

    return 0;
}
