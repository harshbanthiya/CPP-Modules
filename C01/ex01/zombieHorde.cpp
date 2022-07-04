/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:06:22 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:22:39 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    int     i;
    Zombie *arr;
    i = 0;
    arr = new Zombie[N];
    while (i < N)
    {
        arr[i].setName(name);
        arr[i].announce();
        i++;
    }
    return (arr);
}
