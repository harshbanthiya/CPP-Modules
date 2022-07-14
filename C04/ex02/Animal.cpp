/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:38:42 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 14:12:52 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << BLUE << type << RESET << GREEN << " is an Animal Default Constructor" << RESET << '\n';
}


Animal::Animal(std::string n) : type(n)
{
	std::cout << BLUE << type << RESET << GREEN << " is an Animal String Constructor" << RESET << '\n';
}

Animal::Animal( const Animal & src )
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << BLUE << type << RESET << RED << " is an Animal Destructor" << RESET << '\n' ;
}

Animal& Animal::operator=(const Animal& n)
{
    if (this == &n)
        return (*this);
	this->type = n.type;
    return (*this);
}

void 		Animal::makeSound(void) const 
{
	std::cout << BLUE << type << RESET << " Animal Noises" << '\n';
}

std::string 	Animal::getType(void) const
{
	return (this->type);
}
