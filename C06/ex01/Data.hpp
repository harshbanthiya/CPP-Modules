/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:25:23 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 13:56:23 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{	
	private:
	std::string 	_data;

	public:

		Data(void) : _data("data"){};
		Data(std::string const str) : _data(str){};
		Data( Data const & src ){*this = src;};
		~Data(){};

		Data &operator=( Data const & rhs ){this->_data = rhs._data; return *this;};
		std::string getData(void) const {return this->_data};
};

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif