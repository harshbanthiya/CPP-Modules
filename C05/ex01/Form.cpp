/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:20:08 by sheeed            #+#    #+#             */
/*   Updated: 2022/07/20 10:45:51 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("Unknown"), form_signed(false), grade_required_to_sign(150), grade_required_to_execute(150)
{
	std::cout << "Default Constructor called \n";
}

Form::Form(std::string n, unsigned int sign_, unsigned int execute ) : Name(n), form_signed(false), grade_required_to_sign(sign_), grade_required_to_execute(execute)
{
	if (execute < 1 || sign_ < 1)
		throw (GradeTooHighException());
	if (execute > 150 || sign_ > 150)
		throw (GradeTooLowException());
	return ;
}

Form::Form(const Form &src) : grade_required_to_sign(150), grade_required_to_execute(150)
{
	*this = src;
}

Form::~Form()
{
}

Form &				Form::operator=( Form const & rhs )
{
	if (this == &rhs) {return (*this);}
	
	std::string* stringPTR = (std::string*)&this->Name;
	int* execPTR = (int*)&this->grade_required_to_execute;
	int* signPTR = (int*)&this->grade_required_to_sign;
	
	*stringPTR = rhs.Name;
	*execPTR = rhs.grade_required_to_execute;
	*signPTR = rhs.grade_required_to_sign;

	return (*this);
}

const char* Form::GradeTooLowException::what (void) const throw()
{
	return "The grade is too low!";
}

const char* Form::GradeTooHighException::what (void) const throw()
{
	return "The grade is too high!";
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
	out << "Form name : "
		<< f.getName()
		<< ", is signed : "
		<< f.getWhetherSigned()
		<< ", rank to sign : "
		<< f.getGradeSign()
		<< ", rank to exec : "
		<< f.getGradeExecute();
	return (out);
}

void Form::beSigned (const Bureaucrat& b)
{
	if (b.getGrade() > (int)this->grade_required_to_sign)
		throw (Form::GradeTooLowException());
	else
		form_signed = true;
}