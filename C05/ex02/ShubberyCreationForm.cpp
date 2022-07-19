/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:31 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 14:05:21 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm () : Form("Unknown", false, 145, 137)
{
    
}  
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, false, 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

