/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:11:01 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/07 11:04:23 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << '\n';   
}


void Harl::info (void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! if you did, I wouldn't be asking for more!" << '\n';   
}


void Harl::warning (void)
{
    std::cout <<   "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << '\n';   
}


void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << '\n';   
}

void Harl::complain(std::string level)
{

    std::string str_l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if (level == str_l[i])
        {
            switch (i)
            {
                case 0: this->debug();
                case 1: this->info();
                case 2: this->warning();
                case 3: this->error();
            }            
            return ;
        }
    } 
    std::cout << "[ Probably complaining about insignificant problems ]" << '\n';
}
