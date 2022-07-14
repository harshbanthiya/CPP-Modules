/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:42:05 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:30:11 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
	std::cout << BLUE << type << RESET << GREEN << " is an Cat Default Constructor" << RESET << '\n';
	b = new Brain;
}

Cat::Cat( const Cat & src )
{
	*this  = src;
}

Cat::~Cat()
{
	std::cout << BLUE << type << RESET << RED << " is a Cat Destructor" << RESET << '\n' ;
	delete b;
}

Cat& Cat::operator=(const Cat& n)
{
    if (this == &n)
        return (*this);
	this->type = n.type;
    return (*this);
}
void 		Cat::makeSound(void) const
{
	std::cout << BLUE << type << RESET << " Meow and Purr" << '\n';
}

std::string 	Cat::getIdea(unsigned int id) const
{
	return (b->getIdea(id));
}

void 			Cat::setIdea(unsigned int id, const std::string val)
{
	b->setIdea(id, val);	
}