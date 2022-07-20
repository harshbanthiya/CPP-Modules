/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:20:02 by sheeed            #+#    #+#             */
/*   Updated: 2022/07/20 12:39:19 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	private:

	std::string 	Name;
	bool			form_signed;
	int 			grade_required_to_sign;
	int 			grade_required_to_execute;		
	
	public:

		Form();
		Form(std::string n, int sign_, int  execute);
		Form( const Form &src );
		virtual ~Form();
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
		int				getGradeSign(void) const;
		int 			getGradeExecute(void) const;
		void 			beSigned(const Bureaucrat &f);
		Form&			operator=(Form const & rhs);
		virtual void 	execute(Bureaucrat const &executor) const = 0 ;

};
std::ostream& operator<< (std::ostream& out, const Form& f);

#endif