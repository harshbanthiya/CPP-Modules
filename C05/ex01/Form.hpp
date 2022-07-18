/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:20:02 by sheeed            #+#    #+#             */
/*   Updated: 2022/07/18 12:02:57 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{

	private:

	std::string 	Name;
	bool			form_signed;
	unsigned int 	grade_required_to_sign;
	unsigned int 	grade_required_to_execute;		
	
	

	public:

		Form();
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );


};

#endif