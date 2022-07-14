/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:25:02 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:27:06 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */

class WrongAnimal
{

	protected:
		std::string		type;
	
	public:

		WrongAnimal();
		WrongAnimal(std::string t);
		WrongAnimal( WrongAnimal const & src );
 		virtual ~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& n);	
		std::string getType(void) const;
		void 	makeSound(void) const ;

};

#endif 