/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShubberyCreationForm.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:31 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 11:18:35 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm () : Form("Unknown", 145, 137)
{
    
}  
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
 if (this == &rhs) 
        {return (*this);}
    this->Form::operator=(rhs);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

void
ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream ofs;

		ofs.open(executor.getName() + "Shrubbery");
		if (ofs.fail())
		{
			std::cerr << "cannot create " << (executor.getName() + "_shrubbery") << " file" << '\n';
			return;
		}
		ofs << "	       _-_" << '\n'
		 			<<"   /~~   ~~\\" << '\n'
					<< "/~~         ~~\\" << '\n'
					<< "{               }" << '\n'
					<<" \\  _-     -_  /" << '\n'
					<<"   ~  \\ //   ~" << '\n'
					<<"_- -   | | _- _" << '\n'
					<<"  _ -  | |   -_" << '\n'
					<<"      // \\\\"
					<< '\n';
		ofs.close();
	}
}