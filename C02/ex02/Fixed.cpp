/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:44 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/11 15:26:52 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::number_of_fractional_bits = 8;

Fixed::Fixed() : fixed_point_number_value(0){}
Fixed::Fixed(const int value) : fixed_point_number_value(value * (1 << Fixed::number_of_fractional_bits)){}
Fixed::Fixed(const float value) : fixed_point_number_value((int) roundf(value * (1 << Fixed::number_of_fractional_bits))){}
Fixed::~Fixed(){}
Fixed::Fixed(const Fixed& f){*this = f;}

// COMPARISON OPERATORS
bool Fixed::operator>(const Fixed& rhs) const {return (this->getRawBits() > rhs.getRawBits());}
bool Fixed::operator<(const Fixed& rhs) const {return (this->getRawBits() < rhs.getRawBits());}
bool Fixed::operator<=(const Fixed& rhs) const {return (this->getRawBits() <= rhs.getRawBits());}
bool Fixed::operator>=(const Fixed& rhs) const {return (this->getRawBits() >= rhs.getRawBits());}
bool Fixed::operator==(const Fixed& rhs) const {return (this->getRawBits() == rhs.getRawBits());}
bool Fixed::operator!=(const Fixed& rhs) const {return (this->getRawBits() != rhs.getRawBits());}

//ARITHMETIC OPERATORS 
Fixed Fixed::operator+(const Fixed& rhs) const{return (Fixed(this->toFloat() + rhs.toFloat()));}
Fixed Fixed::operator-(const Fixed& rhs) const{return (Fixed(this->toFloat() - rhs.toFloat()));}
Fixed Fixed::operator*(const Fixed& rhs) const{return (Fixed(this->toFloat() * rhs.toFloat()));}
Fixed Fixed::operator/(const Fixed& rhs) const{return (Fixed(this->toFloat() / rhs.toFloat()));}

// INCREMENT DECREMENT OPERATORS 
Fixed Fixed::operator++(int) 
{
    Fixed temp(*this);
    this->setRawBits(this->getRawBits() + 1);
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
    this->setRawBits(this->getRawBits() - 1);
    return temp;
}

Fixed Fixed::operator--(void )
{
    this->setRawBits(this->getRawBits() - 1);
    return (*this);
}

// MEMBER FUNCTIONS 

void Fixed::setRawBits(int const raw){fixed_point_number_value = raw;}
int Fixed::getRawBits(void) const {return (fixed_point_number_value);}
float Fixed::toFloat(void) const{return ((float)this->fixed_point_number_value / (1 << Fixed::number_of_fractional_bits));}
int Fixed::toInt(void) const{return ((int)this->fixed_point_number_value / (1 << Fixed::number_of_fractional_bits));}
Fixed& Fixed::min(Fixed& a, Fixed& b){return ((a < b) ? a : b);}
Fixed& Fixed::max(Fixed& a, Fixed& b){return ((a > b) ? a : b);}

Fixed& Fixed::operator=(const Fixed& f)
{
    this->fixed_point_number_value = f.getRawBits();
    return (*this);
}

std::ostream& operator<< (std::ostream& out, const Fixed& f)
{
    out << f.toFloat();
    return out;
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