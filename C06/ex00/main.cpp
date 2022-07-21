/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:57:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/21 14:45:48 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int main(int argc, char **argv)
{
    
    if (argc == 2)
    {
        Conversion  A(argv[1]);
    }
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