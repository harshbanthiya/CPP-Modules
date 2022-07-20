/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 13:51:22 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
// Grade required to exectue Shrubbery : 137 ; Robotomy : 45 ; Presidential : 5
int	main(void)
{
	Intern	someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf)
		rrf->execute(Bureaucrat("bob", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
		rrf->execute(Bureaucrat("phil", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrf)
		rrf->execute(Bureaucrat("lucas", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("not existing", "Bender");

	return 0;
}
