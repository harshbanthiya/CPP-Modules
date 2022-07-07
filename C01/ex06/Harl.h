/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:10:54 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/07 11:01:34 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl
{
    private:
    void debug(void);
    void info (void);
    void warning (void);
    void error(void);

    public:
    Harl();
    ~Harl();
    void complain(std::string level);
};



#endif