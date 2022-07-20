/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:57:50 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Form			*form = NULL;
	Bureaucrat		bob("bob", 1);
	Bureaucrat		phil("phil", 40);
	Bureaucrat		luc("luc", 150);

	try
	{
		form = new PresidentialPardonForm("28A");
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}


	try
	{
		form = new RobotomyRequestForm("28B");
		form->execute(phil);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}



	try
	{
		form = new ShrubberyCreationForm("28C");
		form->execute(luc);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}



	bob.executeForm(PresidentialPardonForm("45GCD"));
	phil.executeForm(PresidentialPardonForm("45GCD"));

	bob.executeForm(RobotomyRequestForm("74A"));
	phil.executeForm(RobotomyRequestForm("74A"));
	
	phil.executeForm(ShrubberyCreationForm("T408"));

	delete form;

	return 0;
}