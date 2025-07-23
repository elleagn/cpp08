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
#include <iostream>

int  main(void) {
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> vect(array, array + sizeof(array) / sizeof(int));
    std::vector<int>::iterator it = easyfind(vect, 3);
    std::cout << *it << std::endl;
}
