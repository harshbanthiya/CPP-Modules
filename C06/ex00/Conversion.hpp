/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:54:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/21 18:40:37 by sheeed           ###   ########.fr       */
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
	bool 	_inf_n;
	bool 	_inf_p;
	bool 	_inf;
	bool 	_nan;
	bool 	_char_overflow;
	bool 	_int_overflow;
	bool 	_float_overflow;
	bool 	_error;

	public:

		Conversion();
		Conversion(std::string str);
		Conversion( Conversion const & src );
		~Conversion();

		Conversion &		operator=( Conversion const & rhs );

		void check_overflow(std::string &str);
		void convert_int(std::string &str);
		void convert_char(std::string &str);

		void print_int(void) const;
		void print_char(void) const;
		void print(void) const;

};


#endif