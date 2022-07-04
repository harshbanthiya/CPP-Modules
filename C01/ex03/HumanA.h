/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:17 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:53:28 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.h"

class HumanA {
private:
     const std::string name;
     Weapon     &kind;
public:
    HumanA(const char *name, Weapon &kind);
    virtual ~HumanA();
    void    attack();
    void	setWeapon(Weapon& kind);
};


#endif 
