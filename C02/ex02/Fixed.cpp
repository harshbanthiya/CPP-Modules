/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:44 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/08 18:08:13 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value) : fixed_point_number_value(value)
{
    std::cout << "Int Constructor called" << '\n';
}

Fixed::Fixed() : fixed_point_number_value(0)
{
    std::cout << "Default Constructor called" << '\n';
}

Fixed::Fixed(const float value) : fixed_point_number_value(value)
{
    std::cout << "Float Constructor called" << '\n';
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

float Fixed::toFloat(void) const
{
    float new_fixed_value = static_cast<float>(fixed_point_number_value);
    return new_fixed_value;
}

int Fixed::toInt(void) const
{
    int new_fixed_value = static_cast<int>(fixed_point_number_value);
    return new_fixed_value;
}

bool Fixed::operator>(const Fixed& rhs) const 
{
    return fixed_point_number_value > rhs.fixed_point_number_value;
}

bool Fixed::operator<(const Fixed& rhs) const 
{
    return fixed_point_number_value < rhs.fixed_point_number_value;
}


bool Fixed::operator<=(const Fixed& rhs) const 
{
    return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed& rhs) const 
{
    return !(rhs < *this);
}

bool Fixed::operator==(const Fixed& rhs) const 
{
    return fixed_point_number_value == rhs.fixed_point_number_value;
}

bool Fixed::operator!=(const Fixed& rhs) const 
{
    return !(rhs == *this);
}

std::ostream& operator<< (std::ostream& out, const Fixed& f)
{
    out << f.fixed_point_number_value;
    return out;
}

