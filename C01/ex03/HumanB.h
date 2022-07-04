/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:37:06 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:37:07 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef UNNECESSARY_VIOLENCE_HUMANB_H
#define UNNECESSARY_VIOLENCE_HUMANB_H
#include "Weapon.h"

class HumanB {
private:
    std::string name;
    Weapon  *kind;
public:
    HumanB(const char *name);
    virtual ~HumanB();
    void attack();
    void	setWeapon(Weapon& kind);
};


#endif
