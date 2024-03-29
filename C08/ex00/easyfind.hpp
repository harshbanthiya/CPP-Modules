/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:39:03 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/08/01 11:08:26 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

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