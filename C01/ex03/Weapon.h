/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:36:10 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 13:36:21 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UNNECESSARY_VIOLENCE_WEAPON_H
#define UNNECESSARY_VIOLENCE_WEAPON_H
#include <iostream>

class Weapon {
private:
    std::string type;
public:
    void setType(const std::string &type);
    const std::string &getType() const;
    Weapon(const char *type);
    virtual ~Weapon();
};


#endif
