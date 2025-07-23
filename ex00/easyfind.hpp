/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:44:50 by gozon             #+#    #+#             */
/*   Updated: 2025/07/23 15:28:54 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <cstddef>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& haystack, int needle) {

    typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
    return (it);

}

#endif
