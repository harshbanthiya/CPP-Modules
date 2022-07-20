/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:36:22 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:52:10 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : Form("Unknown", 25, 5)
{
    
}  
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(const Bureaucrat &b)
{
    
    std::cout << b.getName() << " " << Target << "has been pardoned by Zaphod Beeblebrox" << '\n';
}