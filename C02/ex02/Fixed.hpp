/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:42 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/11 13:50:56 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    float             fixed_point_number_value;
    static const int    number_of_fractional_bits;
    
    public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed& f); //copy constructor 
    Fixed& operator=(const Fixed& f); // assignment operator 
    void setRawBits(int const raw);
    int getRawBits(void) const ;
    float toFloat(void) const;
    int toInt(void) const;
    // Output stream
    friend std::ostream& operator<< (std::ostream& out, const Fixed& f);
    
    // Comparison and Relational Operators 
    bool operator<(const Fixed& rhs) const;
    bool operator>(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

    //Arthemetic Operators 

    Fixed operator+(const Fixed& rhs)const;
    Fixed operator-(const Fixed& rhs)const;
    Fixed operator*(const Fixed& rhs)const;
    Fixed operator/(const Fixed& rhs)const;

    // Pre increment and Post Increment 
    Fixed operator++(int) ;
    Fixed operator++(void) ;
    Fixed operator--(void) ;
    Fixed operator--(int) ;
    

    // Min max 
    Fixed& min(Fixed& a, Fixed& b);
    Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

};
  