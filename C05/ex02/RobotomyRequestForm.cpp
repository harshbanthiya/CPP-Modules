/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:20 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:52:26 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () : Form("Unknown", 72, 45)
{
    
}  
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else
	{
		srand(time(NULL));
		std::cout << "Grgrgrgrgr ! (drills noises)" << '\n';

		if (std::rand() % 2 == 0)
		{
			std::cout << executor.getName() << " has been robotomized with 50\% of success !" << '\n';
		}
		else
		{
			std::cout << "the robotization of " << executor.getName() << " has failed !" << '\n';
		}
	}
}