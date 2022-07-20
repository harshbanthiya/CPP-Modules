/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:31 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:17:51 by sheeed           ###   ########.fr       */
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

void
ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	if (executor.getRank() > this->getRankToExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream ofs;

		ofs.open(executor.getName() + "_shrubbery");
		if (ofs.fail())
		{
			std::cerr << "cannot create " << (executor.getName() + "_shrubbery") << " file" << std::endl;
			return;
		}
		ofs << "	       _-_" << std::endl
		 			<<"   /~~   ~~\\" << std::endl
					<< "/~~         ~~\\" << std::endl
					<< "{               }" << std::endl
					<<" \\  _-     -_  /" << std::endl
					<<"   ~  \\ //   ~" << std::endl
					<<"_- -   | | _- _" << std::endl
					<<"  _ -  | |   -_" << std::endl
					<<"      // \\\\"
					<< std::endl;
		ofs.close();
	}
}