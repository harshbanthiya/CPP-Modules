/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:44:04 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main ()
{
	try
	{
		Form			f("A12-B34", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form			f("A12-B34", 1, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form			f("A12-B34", 1, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Form			f("A12-B34", 151, 1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		Bureaucrat		paul = Bureaucrat("Logan", 1);
		Form			f("A12-B34", 150, 150);
	
		std::cout << f << '\n';
		paul.signForm(f);
		std::cout << f << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
		
	try
	{
		Bureaucrat		paul = Bureaucrat("Logan", 10);
		Form			f("A12-B34", 1, 1);

		std::cout << f << '\n';
		paul.signForm(f);
		std::cout << f << '\n';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	return 0;	
}
