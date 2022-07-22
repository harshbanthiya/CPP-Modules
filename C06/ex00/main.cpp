/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:57:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 13:43:20 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
    
    std::string		str;
	Conversion		*c;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << '\n';
		return (1);
	}

   std::cout << "max float : " << std::numeric_limits<float>::max() << '\n';
   std::cout << "max double : " << std::numeric_limits<double>::max() << '\n';
   std::cout << "max int : " << std::numeric_limits<int>::max() << '\n';
   std::cout << "float infinity : " << std::numeric_limits<float>::infinity() << '\n';
   std::cout << "double infinity : " << std::numeric_limits<double>::infinity() << '\n';

	str = argv[1];
	c = new Conversion(str);
	c->print();

	delete c;

	return (0);
}