/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:40:45 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/26 13:46:17 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void    iter(T t[], size_t size, void (*f)(const T &))
{
    for (size_t i = 0; i < size; i++)
        (*f)(t[i]);
}

template<typename T>
void	putstr (T & str)
{
	std::cout << str << '\n';
}