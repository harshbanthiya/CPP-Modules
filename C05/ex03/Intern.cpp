/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:34:37 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 13:53:34 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

# define TOTAL_FORMS 3

Intern::Intern (void){}

Intern::Intern (const Intern& ref){*this = ref;}

Intern::~Intern (void){}

Intern& Intern::operator=(__attribute__((unused)) const Intern& ref){return *this;}

Form* Intern::makeForm (std::string const type, std::string const name)
{
	Form* 		forms[TOTAL_FORMS] = {new PresidentialPardonForm(name), new RobotomyRequestForm(name), new ShrubberyCreationForm(name)};
	std::string names[TOTAL_FORMS] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;

	for(; i < TOTAL_FORMS; ++i)
		if (names[i] == type)
			break;
	for(int j = 0; j < TOTAL_FORMS; ++j)
		if (i != j)
			delete forms[j];
	if (i == TOTAL_FORMS)
	{
		std::cerr << "Intern didn't find form " << type << '\n';
		return (NULL);
	}
	else
	{
		std::cout << "Intern has created form " << type << '\n';
		return (forms[i]);
	}
}