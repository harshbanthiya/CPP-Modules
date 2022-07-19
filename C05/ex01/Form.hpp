/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:20:02 by sheeed            #+#    #+#             */
/*   Updated: 2022/07/19 11:28:03 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{

	private:

	std::string 	Name;
	bool			form_signed;
	unsigned int 	grade_required_to_sign;
	unsigned int 	grade_required_to_execute;		
	
	

	public:

		Form();
		Form(std::string n, bool t, unsigned int sign_, unsigned int execute);
		Form( Form const & src );
		~Form();
		class GradeTooHighException : public std::exception{
			public:
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
			virtual const char *what(void) const throw();
		};
		std::string		getName(void) const;
		bool 			getWhetherSigned(void) const;
		unsigned int	getGradeSign(void) const;
		unsigned int 	getGradeExecute(void) const;
		void 			beSigned(Bureaucrat b);
		Form &		operator=( Form const & rhs );


};

#endif