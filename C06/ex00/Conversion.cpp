/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:54:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/21 14:45:50 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() : _int_v(0), _char_v(0), _float_v(0.0), _double_v(0.0), _inff_n(false), _inff_p(false), _inf_n(false), _inf_p(false)
{
}

Conversion::Conversion(std::string str) : _int_v(0), _char_v(0), _float_v(0.0), _double_v(0.0), _inff_n(false), _inff_p(false), _inf_n(false), _inf_p(false)
{
	if (is_int(str))
	{
		std::cout << "You entered a int" << '\n';
		return ;
	}

	if (is_char(str))
	{
		std::cout << "You entered a char" << '\n';
		return ;
	}

	
	//if (is_float(str))
	//	std::cout << "You entered a float" << '\n';

	
	//if (is_double(str))
	//	std::cout << "You entered a double" << '\n';
	else 
	{
		std::cout << "Error!" << '\n';
		return ;
	}
}


Conversion::Conversion( const Conversion & src )
{
	*this = src;
}

Conversion::~Conversion()
{
}

Conversion &				Conversion::operator=( Conversion const & rhs )
{
	if ( this != &rhs )
	{
		return (*this);
	}
	return *this;
}

bool 	Conversion::is_char(std::string str)
{
	if (str.length() == 1 && std::isprint(str[0]))
		return (true);
	else 
		return (false);
}

bool 	Conversion::is_int(std::string str)
{
	size_t 	i;
	
	i = 0;
	while(i < str.length())
	{
		if (i == 0 && !(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
			return (false);
		if (i != 0 && !(str[i] >= '0' && str[i] <= '9'))
			return (false);
		i++;
	}
	return (true);
}	