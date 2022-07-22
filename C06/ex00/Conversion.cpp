/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:54:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 12:42:59 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iomanip>

bool 	is_char(std::string &str);
bool 	is_int(std::string &str);
bool 	is_float(std::string &str);
bool 	is_double(std::string &str);

Conversion::Conversion() : _int_v(0), _char_v('0'), _float_v(0.0), _double_v(0.0), _inf_n(false), _inf_p(false),
_inf(false), _nan(false), _char_overflow(false), _int_overflow(false), _float_overflow(false), _error(false){}

Conversion::Conversion(std::string str) : _inf_n(false), _inf_p(false),
_inf(false), _nan(false), _char_overflow(false), _int_overflow(false), _float_overflow(false), _error(false)
{
	if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		this->_inf_n = true;
	else if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		this->_inf_p = true;
	else if (str.compare("inff") == 0 || str.compare("inf") == 0)
		this->_inf = true;
	else if (str.compare("nanf") == 0 || str.compare("nan") == 0)
		this->_nan = true;
	else if (is_int(str))
		this->convert_int(str);
	else if (is_char(str))
		this->convert_char(str);
	else if (is_float(str))
		this->convert_float(str);
	else if (is_double(str))
		this->convert_double(str);
	else 
		this->_error = true;
}

Conversion::Conversion( const Conversion & src ){*this = src;}
Conversion::~Conversion(){}

Conversion &				Conversion::operator=( Conversion const & rhs )
{
	this->_char_v = rhs._char_v;
	this->_int_v = rhs._int_v;
	this->_float_v = rhs._float_v;
	this->_double_v = rhs._double_v;
	this->_nan = rhs._nan;
	this->_inf_n = rhs._inf_n;
	this->_inf_p = rhs._inf_p;
	this->_error = rhs._error;
	return (*this);
}

// Identification Functions 

bool 	is_char(std::string &str)
{
	if (str.length() == 1 && std::isprint(str[0]))
		return (true);
	else 
		return (false);
}

bool 	is_float(std::string &str)
{
	std::string::const_iterator it = str.begin();
	bool decimalPoint = false;
	size_t minSize = 0;

	if (str.length() > 0 && (str[0] == '-' || str[0] == '+'))
	{
		it++;
		minSize++;
	}
	while (it != str.end())
	{
		if (*it == '.')
		{
			if (!decimalPoint)
				decimalPoint = true;
			else 
				break;
		}
		else if (!std::isdigit(*it) && ((*it != 'f') || it + 1 != str.end() || !decimalPoint))
			break;
		it++;
	}
	return (str.length() > minSize && it == str.end());
}

bool 	is_double(std::string &str)
{
	std::string::const_iterator it = str.begin();
	bool decimalPoint = false;
	size_t minSize = 0;

	if (str.length() > 0 && (str[0] == '-' || str[0] == '+'))
	{
		it++;
		minSize++;
	}
	while (it != str.end())
	{
		if (*it == '.')
		{
			if (!decimalPoint)
				decimalPoint = true;
			else 
				break;
		}
		else if (!std::isdigit(*it))
			break;
		it++;
	}
	return (str.length() > minSize && it == str.end());
}

bool 	is_int(std::string &str)
{
	size_t 	i;
	
	i = 0;
	while(i < str.length())
	{
		if (i == 0 && !(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
			return (false);
		if (i != 0 && !(str[i] >= '0' && str[i] <= '9'))
			return (false);
		i++;
	}
	return (true);
}	


// Conversion functions 

void 	Conversion::check_overflow(std::string &str)
{
	double		nbr;

	nbr = strtod(str.c_str(), NULL);
	if (errno == 0)
	{
		if (nbr < INT_MIN || nbr > INT_MAX)
			this->_int_overflow = true;
		if (nbr < CHAR_MIN || nbr > CHAR_MAX)
			this->_char_overflow = true;
		if (nbr < INT_MIN || nbr > INT_MAX)
			this->_int_overflow = true;
		if (nbr <= std::numeric_limits<float>::max() * -1  || nbr> std::numeric_limits<float>::max())
			this->_float_overflow = true;
	}
	
}

void	Conversion::convert_int(std::string &str)
{
	long int 	nbr;

	this->check_overflow(str);
	nbr = atol(str.c_str());
	if (nbr < INT_MIN || nbr > INT_MAX)
		this->_error = true;
	else 
	{
		this->_int_v= atoi(str.c_str());
		this->_double_v = static_cast<double>(this->_int_v);
		this->_float_v = static_cast<float>(this->_int_v);
		this->_char_v = static_cast<char>(this->_int_v);
	}
	
}

void			Conversion::convert_char(std::string & str)
{
	this->check_overflow(str);
	this->_char_v = str[0];
	this->_int_v = static_cast<int>(this->_char_v);
	this->_double_v = static_cast<double>(this->_char_v);
	this->_float_v = static_cast<float>(this->_char_v);
}

void	Conversion::convert_float(std::string &str)
{
	this->check_overflow(str);
	this->_float_v = strtof(str.c_str(), NULL);
	if (errno != 0)
		this->_error = true;
	else 
	{
		this->_char_v = static_cast<char>(this->_float_v);
		this->_int_v = static_cast<int>(this->_float_v);
		this->_double_v = static_cast<double>(this->_float_v);
	}
}

void	Conversion::convert_double(std::string &str)
{
	this->check_overflow(str);
	this->_double_v = strtod(str.c_str(), NULL);
	if (errno != 0)
		this->_error = true;
	else 
	{
		this->_float_v = static_cast<float>(this->_double_v);
		this->_int_v = static_cast<int>(this->_double_v);
		this->_char_v = static_cast<char>(this->_double_v);
	}
}

// Printing Functions 

void 	Conversion::print_int(void) const
{
	if (this->_inf_n || this->_inf_p || this->_inf
		|| this->_nan || this->_error || this->_int_overflow)
		std::cout << "Impossible" << '\n';
	else 
		std::cout << this->_int_v << '\n';
}

void 	Conversion::print_char(void) const 
{
	if (this->_inf_n || this->_inf_p || this->_inf
		|| this->_nan || this->_error || this->_char_overflow)
		std::cout << "Impossible" << '\n';
	else if (!std::isprint(static_cast<int>(this->_char_v)))
		std::cout << "Non Displayable value" << '\n';
	else 
		std::cout << this->_char_v << '\n';
}

void 	Conversion::print_double(void) const
{
	if (this->_error)
		std::cout << "Impossible" << '\n';
	else if (this->_inf_n)
		std::cout << "-inf" << '\n';
	else if (this->_inf_p)
		std::cout << "+inf" << '\n';
	else if (this->_nan)
		std::cout << "nan" << '\n';
	else if (this->_inf)
		std::cout << "inf" << '\n';
	else
   		std::cout << std::setiosflags(std::ios::fixed) << this->_double_v << '\n';
}

void 	Conversion::print_float(void) const
{
	if (this->_error)
		std::cout << "Impossible" << '\n';
	else if (this->_inf_n)
		std::cout << "-inff" << '\n';
	else if (this->_inf_p)
		std::cout << "+inff" << '\n';
	else if (this->_nan)
		std::cout << "nan" << '\n';
	else if (this->_inf)
		std::cout << "inff" << '\n';
	else
   		std::cout << std::setiosflags(std::ios::fixed) << this->_float_v << "f" << '\n';
}

void	Conversion::print (void) const
{
	std::cout << "char: ";
	this->print_char();
	std::cout << "int: ";
	this->print_int();
	std::cout << "float: ";
	this->print_float();
	std::cout << "double: ";
	this->print_double();
}

