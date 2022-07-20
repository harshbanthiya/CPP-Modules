/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:36:22 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 12:54:42 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : Form("Unknown", 25, 5)
{
    
}  
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src){*this = src;}
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

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
    std::cout << executor.getName() << "has been pardoned by Zaphod Beeblebrox" << '\n';
}