/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:41:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:06:54 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
	std::cout << BLUE << type << RESET << GREEN << " is a Dog Default Constructor" << RESET << '\n';
}

Dog::Dog( const Dog & src )
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << BLUE << type << RESET << RED << " is a Dog Destructor" << RESET << '\n' ;
}

void 		Dog::makeSound(void) const 
{
	std::cout << BLUE << type << RESET << " Bark and lick" << '\n';
}

Dog& Dog::operator=(const Dog& n)
{
    if (this == &n)
        return (*this);
	this->type = n.type;
    return (*this);
}