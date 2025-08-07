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
#include <cstdlib>
#include <ctime>
#include <algorithm>



void subjectTests() {
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
}

void stringTests() {
    std::cout << "Test 1 - Push and top: ";

    std::list<std::string> lst;
    lst.push_back("hello");
    lst.push_back("blbl");

    MutantStack<std::string> mstack;
    mstack.push("hello");
    mstack.push("blbl");

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
    lst.push_back("pumpkin");
    lst.push_back("unicorn");
    lst.push_back("goodbye");
    lst.push_back("cat");
    std::list<std::string>::iterator lit = lst.begin();
    std::list<std::string>::iterator lite = lst.end();
    ++lit;
    --lit;

    mstack.push("pumpkin");
    mstack.push("unicorn");
    mstack.push("goodbye");
    mstack.push("cat");
    MutantStack<std::string>::iterator it = mstack.begin();
    MutantStack<std::string>::iterator ite = mstack.end();
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

    std::stack<std::string> s(mstack);
}

void algorithmTests() {
    std::cout << "Stack: ";
    MutantStack<int> mstack;
    std::list<int> lst;
    int nb;

    srand(time(0));

    for (int i = 0; i < 15; i++) {
        nb = rand() % 101;
        lst.push_back(nb);
        mstack.push(nb);
        std::cout << nb << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Test 1 - Test if the stack is correct (std::equal): ";
    if (std::equal(mstack.begin(), mstack.end(), lst.begin()))
        std::cout << GREEN << "OK";
    else
        std::cout << RED << "FAIL";
    std::cout << RESET << std::endl;

    std::cout << "Test 2 - Reverse the stack (std::reverse) + bidirectional operator: " << std::endl;
    std::reverse(mstack.begin(), mstack.end());
    std::cout << "New stack: ";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;


}


int main() {

    std::cout << "\nPART 1: Basic tests (from the subject)" << std::endl << std::endl;
    subjectTests();
    std::cout << std::endl;
    std::cout << "PART 2 - Tests with <algorithm>" << std::endl << std::endl;
    algorithmTests();
    std::cout << std::endl;
    std::cout << "PART 3 - Tests with strings" << std::endl << std::endl;
    stringTests();
    std::cout << std::endl;
}
