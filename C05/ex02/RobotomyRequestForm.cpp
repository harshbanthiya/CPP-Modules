/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:20 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 13:59:19 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () : Form("Unknown", false, 72, 45)
{
    
}  
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, false, 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

