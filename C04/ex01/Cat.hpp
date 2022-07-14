/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:42:00 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:28:43 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain 	*b;
	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat& 			operator=(const Cat& n);	
		void 			makeSound(void) const ;
		std::string 	getIdea(unsigned int id) const;
		void 			setIdea(unsigned int id, const std::string val);
};



#endif