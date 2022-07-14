/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:28:51 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:30:26 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << BLUE << type << RESET << GREEN << " is an  Wrong Cat Default Constructor" << RESET << '\n';
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this  = src;
}

WrongCat::~WrongCat()
{
	std::cout << BLUE << type << RESET << RED << " is a Wrong Cat Destructor" << RESET << '\n' ;
}

WrongCat& WrongCat::operator=(const WrongCat& n)
{
    if (this == &n)
        return (*this);
	this->type = n.type;
    return (*this);
}
void 		WrongCat::makeSound(void) const
{
	std::cout << BLUE << type << RESET << "Wrong Cat noise: chug chug chug Meow and Purr" << '\n';
}