/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:38:37 by hbanthiy          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/08/01 11:04:03 by sheeed           ###   ########.fr       */
=======
/*   Updated: 2022/07/31 11:20:41 by hbanthiy         ###   ########.fr       */
>>>>>>> b0258a947bc690f98c4d589bd382c8c520694988
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{

	std::vector<int> _vec;

	_vec.push_back(42);
	_vec.push_back(2);
	_vec.push_back(521);
	_vec.push_back(12);
	_vec.push_back(982);
	_vec.push_back(1242);

	try
	{
		easyfind(_vec, 521);
		std::cout << "the value has been found" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		easyfind(_vec, 0);
		std::cout << "the value has been found" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		try
	{
		easyfind(_vec, 12);
		std::cout << "the value has been found" << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}