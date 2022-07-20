/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:20:08 by sheeed            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/20 10:16:19 by sheeed           ###   ########.fr       */
=======
/*   Updated: 2022/07/20 10:45:51 by hbanthiy         ###   ########.fr       */
>>>>>>> 2bcbdccc526b25884ef8c6027b85b7487e2bae2b
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

Form::Form( const Form & src )
{
}


Form::~Form()
{
}


Form &				Form::operator=( Form const & rhs )
{
	if (this == &ref) {return (*this);}
	
	std::string* stringPTR = (std::string*)&this->_name;
	int* execPTR = (int*)&this->_rankToExec;
	int* signPTR = (int*)&this->_rankToSign;

	*stringPTR = ref._name;
	*execPTR = ref._rankToExec;
	*signPTR = ref._rankToSign;

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
	o 	<< "Form name : "
		<< form.getName()
		<< ", is signed : "
		<< form.getIsSigned()
		<< ", rank to sign : "
		<< form.getRankToSign()
		<< ", rank to exec : "
		<< form.getRankToExec();
	return (o);
	
}
void Form::beSigned (const Bureaucrat& b)
{
<<<<<<< HEAD
	if (b.getRank() > this->_rankToSign)
		throw Form::GradeTooLowException();
=======
	if (b.getGrade() > (int)this->grade_required_to_sign)
		throw (Form::GradeTooLowException());
>>>>>>> 2bcbdccc526b25884ef8c6027b85b7487e2bae2b
	else
		this->_isSigned = true;
}