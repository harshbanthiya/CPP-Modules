/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:53:32 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 10:54:25 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_ZOMBIE_H
#define ZOMBIE_ZOMBIE_H
#include <iostream>

class Zombie {
private:
    const std::string name;
public:
    Zombie(const std::string &zombie_name);
    virtual ~Zombie();
    void announce();
};
Zombie *newZombie(std::string str);
void randomChump(std::string str);

#endif 
