/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:44:52 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 11:04:35 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): Name("Unknown"), grade(150)
{
	return ;
}
Bureaucrat::Bureaucrat(std::string const n, unsigned int val): Name(n), grade(val){
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

unsigned int 	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}		

void 			Bureaucrat::incrementGrade(void)
{
		if (this->getGrade() == 1)
			throw(Bureaucrat::GradeTooHighException());
		if (this->getGrade() <= 150 && this->getGrade() > 1)
			this->grade += 1;
}


void 			Bureaucrat::decrementGrade(void)
{
		if (this->getGrade() == 150)
			throw(Bureaucrat::GradeTooLowException());
		if (this->getGrade() >= 1 && this->getGrade() < 150)
			this->grade -= 1;
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& f)
{
	out << f.getName() << ", bureaucrat grade " << f.getGrade() << ".\n";
    return out;
}

void Bureaucrat::signForm (Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout 	<< Name 
					<< " signed "
					<< form.getName()
					<< "."
					<< '\n';	
	} 
	catch (std::exception &e)
	{
		std::cout 	<< Name 
					<< " couldn't sign "
					<< form.getName()
					<< " because "
					<< e.what()
					<< "."
					<< '\n';
	}
}

void Bureaucrat::executeForm (const Form& form)
{
	try
	{
		form.execute(*this);
		std::cout 	<< Name
					<< " executed "
					<< form.getName()
					<< '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr 	<< Name
					<< " cannot executed "
					<< form.getName()
					<< " because "
					<< e.what()
					<< '\n';
	}
	
}