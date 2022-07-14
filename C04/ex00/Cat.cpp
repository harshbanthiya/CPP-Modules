/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:42:05 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:06:39 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
	std::cout << BLUE << type << RESET << GREEN << " is an Cat Default Constructor" << RESET << '\n';
}

Cat::Cat( const Cat & src )
{
	*this  = src;
}

Cat::~Cat()
{
	std::cout << BLUE << type << RESET << RED << " is a Cat Destructor" << RESET << '\n' ;
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