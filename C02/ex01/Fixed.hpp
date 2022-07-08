/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:42 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/08 17:46:08 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
    float             fixed_point_number_value;
    static const int    number_of_fractional_bits = 8;
    
    public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed& f); //copy constructor 
    Fixed& operator=(const Fixed& f); // assignment operator 
    void setRawBits(int const raw);
    int getRawBits(void);
    float toFloat(void) const;
    int toInt(void) const;
    friend std::ostream& operator<< (std::ostream& out, const Fixed& f);
};
  