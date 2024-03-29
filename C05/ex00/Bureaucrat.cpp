/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:44:52 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:34:48 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): Name("Unknown"), grade(150)
{
	return ;
}
Bureaucrat::Bureaucrat(std::string const n, int val): Name(n), grade(val){
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat &src ){*this = src;}

Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this == &rhs)
        return (*this);
	this->Name = rhs.Name;
	this->grade = rhs.grade;
    return (*this);
}
const char* Bureaucrat::GradeTooLowException::what (void) const throw()
{
	return "The grade you are trying to enter is too low, maximum allowed value is 150";
}

const char* Bureaucrat::GradeTooHighException::what (void) const throw()
{
	return "The grade you are trying to enter is too high, maximum allowed value is 1";;
}

std::string 	Bureaucrat::getName(void) const
{
	return (this->Name);
}

int 	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}		

void 			Bureaucrat::incrementGrade(int n)
{
		if ((this->getGrade() - n) < 1)
			throw(Bureaucrat::GradeTooHighException());
		else 
			this->grade -= n;
}


void 			Bureaucrat::decrementGrade(int n)
{
		if ((this->getGrade() + n) > 150)
			throw(Bureaucrat::GradeTooLowException());
		else 
			this->grade += n;
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& f)
{
	out << f.getName() << ", bureaucrat grade " << f.getGrade() << ".\n";
    return out;
}