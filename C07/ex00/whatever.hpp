/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:13:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/26 13:19:22 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;

    a = b;
    b = tmp;
}


template<typename T>
T min(T &a, T &b)
{
    return ((a < b) ? a : b);    
}


template<typename T>
T max(T &a, T &b)
{
    return ((a > b) ? a : b);    
}


#endif