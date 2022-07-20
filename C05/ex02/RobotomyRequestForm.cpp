/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:20 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:17:27 by sheeed           ###   ########.fr       */
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

void
RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getRankToExec())
		throw AForm::GradeTooLowException();
	else
	{
		srand(time(NULL));
		std::cout << "Grgrgrgrgr ! (drills noises)" << std::endl;

		if (std::rand() % 2 == 0)
		{
			std::cout << executor.getName() << " has been robotomized with 50\% of success !" << std::endl;
		}
		else
		{
			std::cout << "the robotization of " << executor.getName() << " has failed !" << std::endl;
		}
	}
}