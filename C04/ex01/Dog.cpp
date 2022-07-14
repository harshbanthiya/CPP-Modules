/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:41:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:30:42 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
	std::cout << BLUE << type << RESET << GREEN << " is a Dog Default Constructor" << RESET << '\n';
	b = new Brain;
}

Dog::Dog( const Dog & src )
{
	*this = src;
}

Dog::~Dog()
{
	std::cout << BLUE << type << RESET << RED << " is a Dog Destructor" << RESET << '\n' ;
	delete b;
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

std::string 	Dog::getIdea(unsigned int id) const
{
	return (b->getIdea(id));
}

void 			Dog::setIdea(unsigned int id, const std::string val)
{
	b->setIdea(id, val);	
}