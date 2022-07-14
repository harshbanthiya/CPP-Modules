/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:42:09 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:28:39 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
{
	private:
	Brain 	*b;
	
	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog& 		operator=(const Dog& n);
		void 		makeSound(void) const ;
		std::string 	getIdea(unsigned int id) const;
		void 			setIdea(unsigned int id, const std::string val);

};



#endif