/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:35:48 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat		test = Bureaucrat("Logan", 1);
		std::cout << test << '\n';
		test.decrementGrade(10);
		std::cout << test << '\n';
		test.incrementGrade(10);
		std::cout << test << '\n';
		test.incrementGrade(10);
		std::cout << test << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		Bureaucrat		test = Bureaucrat("Prof Charles Xavier", 1);
		std::cout << test << '\n';
		test.decrementGrade(100);
		std::cout << test << '\n';
		test.incrementGrade(10);
		std::cout << test << '\n';
		test.decrementGrade(100);
		std::cout << test << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		Bureaucrat		test = Bureaucrat("Jean Grey", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';

	try
	{
		Bureaucrat		test = Bureaucrat("Cyclops without glasses", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << '\n';
	
	
}
