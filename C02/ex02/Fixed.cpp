/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:44 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/11 13:54:51 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed() : fixed_point_number_value(0)
{
   // std::cout << "Default Constructor called" << '\n';
}

Fixed::Fixed(const int value) : fixed_point_number_value(value * (1 << Fixed::number_of_fractional_bits))
{
    //std::cout << "Int Constructor called" << '\n';
}


Fixed::Fixed(const float value) : fixed_point_number_value((int) roundf(value * (1 << Fixed::number_of_fractional_bits)))
{
    //std::cout << "Float Constructor called" << '\n';
}

Fixed::~Fixed(){
    //std::cout << "Destructor called" << '\n';
}

Fixed::Fixed(const Fixed& f)
{
    *this = f;
    //std::cout << "Copy Constructor called" << '\n';
}

Fixed& Fixed::operator=(const Fixed& f)
{
    //std::cout << "Copy Assignment Constructor called" << '\n';
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

Fixed Fixed::operator+(const Fixed& rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return ((a > b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits()) 
        return  a; 
    else 
        return  b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits()) 
        return  a; 
    else 
        return  b;
}

Fixed Fixed::operator++(int) 
{
    Fixed temp(*this);
    temp.fixed_point_number_value++;
   return temp;
}

Fixed Fixed::operator++(void) 
{
    this->setRawBits(this->getRawBits() + 1);
    return (*this);
}

Fixed Fixed::operator--(int )
{
    Fixed temp(*this);
    temp.fixed_point_number_value--;
    return temp;
}

Fixed Fixed::operator--(void )
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}