/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:54 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:38:09 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_ZOMBIE_H
#define ZOMBIE_ZOMBIE_H
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
