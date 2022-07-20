/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:36:22 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 11:21:10 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : Form("Unknown", 25, 5)
{
    
}  
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

}
PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    if (this == &rhs) 
        {return (*this);}
    this->Form::operator=(rhs);
    return (*this);
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(Bureaucrat &b) const
{
    
    std::cout << b.getName() << " " << Target << "has been pardoned by Zaphod Beeblebrox" << '\n';
}