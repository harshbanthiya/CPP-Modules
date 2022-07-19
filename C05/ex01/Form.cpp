/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:20:08 by sheeed            #+#    #+#             */
/*   Updated: 2022/07/19 11:11:17 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : Name("Unknown"), form_signed(false), grade_required_to_sign(150), grade_required_to_execute(150)
{
	std::cout << "Default Constructor called \n";
}

Form::Form(std::string n, bool t, unsigned int sign_, unsigned int execute ) : Name(n), form_signed(t), grade_required_to_sign(sign_), grade_required_to_execute(execute)
{
	if (execute < 1 || sign_ < 1)
		throw (GradeTooHighException());
	if (execute > 150 || sign_ > 150)
		throw (GradeTooLowException());
	return ;
}

Form::Form( const Form & src )
{
}


Form::~Form()
{
}

void 			Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() <= this->getGradeSign())
		form_signed = true;
	else
		throw(GradeTooLowException());
}	

Form &				Form::operator=( Form const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

const char* Form::GradeTooLowException::what (void) const throw()
{
	return "The grade you are trying to enter is too low, maximum allowed value is 150";
}

const char* Form::GradeTooHighException::what (void) const throw()
{
	return "The grade you are trying to enter is too high, maximum allowed value is 1";;
}

std::string		Form::getName(void) const
{
	return (this->Name);
}
bool 			Form::getWhetherSigned(void) const
{
	return (this->form_signed);
}
unsigned int	Form::getGradeSign(void) const
{
	return (this->grade_required_to_sign);
}
unsigned int 	Form::getGradeExecute(void) const
{
	return (this->grade_required_to_execute);
}


std::ostream& operator<< (std::ostream& out, const Form& f)
{
	//out << f.getName() << ", bureaucrat grade " << f.getGrade() << ".\n";
    return out;
}