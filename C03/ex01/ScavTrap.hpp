/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:18:35 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 11:40:17 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(const std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap &n);
    ScavTrap& operator=(const ScavTrap& n);
    
    void attack(const std::string& target);
    void guardGate(void);

};