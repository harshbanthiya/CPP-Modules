/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:20:22 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
int
main (int ac, char **av)
{
	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 1);
		std::cout << test << std::endl;
		test.lowerRank(10);
		std::cout << test << std::endl;
		test.upperRank(10);
		std::cout << test << std::endl;
		test.upperRank(10);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 1);
		std::cout << test << std::endl;
		test.lowerRank(100);
		std::cout << test << std::endl;
		test.upperRank(10);
		std::cout << test << std::endl;
		test.lowerRank(100);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
}
