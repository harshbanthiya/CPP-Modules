/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:38:33 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:10:29 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */

class Animal
{
	protected:
		std::string		type;
	
	public:

		Animal();
		Animal(std::string t);
		Animal( Animal const & src );
 		virtual ~Animal();

		Animal& operator=(const Animal& n);	
		std::string 	getType(void) const;
		virtual void 	makeSound(void) const ;

};

#endif