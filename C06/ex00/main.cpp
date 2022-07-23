/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:57:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 15:48:51 by hbanthiy         ###   ########.fr       */
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

	str = argv[1];
	c = new Conversion(str);
	c->print();

	delete c;

	return (0);
}