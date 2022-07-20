/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:45:26 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 13:46:01 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		Intern &		operator=( Intern const & rhs );
		Form*	 		makeForm (std::string, std::string);

};

#endif