/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:26:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:27:00 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown")
{
	std::cout << BLUE << type << RESET << GREEN << " is an Wrong Animal Default Constructor" << RESET << '\n';
}


WrongAnimal::WrongAnimal(std::string n) : type(n)
{
	std::cout << BLUE << type << RESET << GREEN << " is an Wrong Animal String Constructor" << RESET << '\n';
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << type << RESET << RED << " is  an Wrong Animal Destructor" << RESET << '\n' ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& n)
{
    if (this == &n)
        return (*this);
	this->type = n.type;
    return (*this);
}

void 		WrongAnimal::makeSound(void) const 
{
	std::cout << BLUE << type << RESET << " Wrong Animal Noises" << '\n';
}

std::string 	WrongAnimal::getType(void) const
{
	return (this->type);
}
