/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:42:09 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:10:08 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal 
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog& 		operator=(const Dog& n);
		void 		makeSound(void) const ;
	
	private:

};



#endif