/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:53:47 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:31:27 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "    is an Brain Default Constructor" << RESET << '\n';
}

Brain::Brain( const Brain & src )
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << RED << "    is an Brain Destructor" << RESET << '\n' ;
}

Brain& Brain::operator=(const Brain& n)
{
    if (this == &n)
        return (*this);
	for (int i = 0; i < MAX_IDEAS; i++)
		this->ideas[i] = n.ideas[i];
    return (*this);
}

std::string 	Brain::getIdea(unsigned int id) const
{
	if (id > MAX_IDEAS)
	{
		std::cout << "Idea out of range \n";
		return (0);
	}
	else 
		return (this->ideas[id]);
}

void 			Brain::setIdea(unsigned int id, const std::string val)
{
	if (id >= 0 && id < MAX_IDEAS)
		this->ideas[id] = val;
	else 
		return ;
}


