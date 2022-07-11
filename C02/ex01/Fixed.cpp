/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:44 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/11 15:03:28 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed() : fixed_point_number_value(0)
{
    std::cout << "Default Constructor called" << '\n';
}

Fixed::Fixed(const int value) : fixed_point_number_value(value * (1 << Fixed::number_of_fractional_bits))
{
    std::cout << "Int Constructor called" << '\n';
}


Fixed::Fixed(const float value) : fixed_point_number_value((int) roundf(value * (1 << Fixed::number_of_fractional_bits)))
{
    std::cout << "Float Constructor called" << '\n';
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << '\n';
}

Fixed::Fixed(const Fixed& f)
{
    *this = f;
    std::cout << "Copy Constructor called" << '\n';
}

Fixed& Fixed::operator=(const Fixed& f)
{
    std::cout << "Copy Assignment Operator called" << '\n';
    this->fixed_point_number_value = f.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int const raw)
{
    fixed_point_number_value = raw;
}

int Fixed::getRawBits(void) const 
{
   // std::cout << "getRawBits member function called" << '\n';
    return (fixed_point_number_value);
}

float Fixed::toFloat(void) const
{
    return ((float)this->fixed_point_number_value / (1 << Fixed::number_of_fractional_bits));
}

int Fixed::toInt(void) const
{
    return ((int)this->fixed_point_number_value / (1 << Fixed::number_of_fractional_bits));
}

std::ostream& operator<< (std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return out;
}