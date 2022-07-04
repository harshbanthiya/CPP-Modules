/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:54 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:24:47 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
private:
     std::string name;
public:
    Zombie();
    void setName(const std::string &name);
    virtual ~Zombie();
    void announce();
};
Zombie* zombieHorde( int N, std::string name );


#endif
