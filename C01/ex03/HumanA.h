/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:17 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:37:22 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef UNNECESSARY_VIOLENCE_HUMANA_H
#define UNNECESSARY_VIOLENCE_HUMANA_H
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
