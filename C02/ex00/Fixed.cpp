/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:44 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/08 16:59:47 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_number_value(0) 
{
    std::cout << "Default Constructor called" << '\n';
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << '\n';
}

Fixed::Fixed(const Fixed& f) : fixed_point_number_value(f.fixed_point_number_value)
{
    std::cout << "Copy Constructor called" << '\n';
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy Assignment Constructor called" << '\n';
    if (this == &f)
        return (*this);
    fixed_point_number_value = f.fixed_point_number_value;
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    fixed_point_number_value = raw;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << '\n';
    return (fixed_point_number_value);
}