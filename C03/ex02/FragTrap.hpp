/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:44:58 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/13 14:47:22 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap();
    FragTrap(const std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &n);
    FragTrap& operator=(const FragTrap& n);
    
    void highFiveGuys(void);

};