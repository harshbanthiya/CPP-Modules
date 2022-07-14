/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:53:42 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:24:35 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAX_IDEAS 100

class Brain
{
	protected:
		std::string 	ideas[MAX_IDEAS];
	public:

		Brain();
		Brain(std::string t);
		Brain(Brain const & src );
 		virtual ~Brain();

		Brain& 			operator=(const Brain& n);	
		std::string 	getIdea(unsigned int id) const;
		void 			setIdea(unsigned int id, const std::string val);
};

#endif