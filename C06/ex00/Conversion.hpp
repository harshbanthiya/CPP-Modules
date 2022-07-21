/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:54:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/21 14:17:05 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>

class Conversion
{
	private:
	int		_int_v;
	char 	_char_v;
	float 	_float_v;
	double 	_double_v;
	bool 	_inff_n;
	bool 	_inff_p;
	bool 	_inf_n;
	bool 	_inf_p;
	

	public:

		Conversion();
		Conversion(std::string str);
		Conversion( Conversion const & src );
		~Conversion();

		Conversion &		operator=( Conversion const & rhs );

		bool is_int(std::string str);
		bool is_char(std::string str);
		bool is_float(std::string str);
		bool is_double(std::string str);
};


#endif