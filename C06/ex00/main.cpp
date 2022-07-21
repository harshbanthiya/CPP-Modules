/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:57:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/21 18:42:04 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

/* 

is_float();
    - Read up on iterators - start with decimal point bool as f
    - If string has some size and first digit is + or minus 
    - 2 loops 
    - if we have reached end of string yet 
        - see if you find a decimal point not two - if you do set it equal to true
        - break if you encounter non digit except f || next is end of string or still havent found the decimal point 
    - normal digits before decimal size > str size && it is the end; 
is_int(); 
    - if str has size and check if first char is a digit or minus 
    - Check until last if all the strlen is digits
is_double();
    - exactly like float without needing to check for letter 'f' 
is_char();
    - length is exactly one and it is printable 

check_overflow();
    - convert str to double using strtod() and check for all overflows 
convert_char();
    
convert_int();
convert_float();
convert_double();


*/