/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:57:42 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/08 16:54:13 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
    int                 fixed_point_number_value;
    static const int    number_of_fractional_bits = 8 ;
    
    public:
    Fixed();
    ~Fixed();
    void setRawBits(int const raw);
    int getRawBits(void);
    Fixed(const Fixed& f); //copy constructor 
    Fixed& operator=(const Fixed& f); // assignment operator 
};
  