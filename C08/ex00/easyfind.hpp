/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:39:03 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/28 14:58:00 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <algorithm>

class NotInContainer : public std::exception
{
	public:
		virtual const char * what (void) const throw() {return ("No such value in this container");}
};

template<typename T>
bool easyfind (T container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		return (true);
	else
		throw NotInContainer();
}
#endif 