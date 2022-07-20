/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:44:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 12:45:46 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form ;
class Bureaucrat
{

	private:
	std::string		Name;
	int 			grade; 
	
	public:

		Bureaucrat();
		Bureaucrat(std::string const n, int val);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		class GradeTooHighException : public std::exception{
			public:
			virtual const char *what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
			virtual const char *what(void) const throw();
		};

		Bureaucrat&		operator=( Bureaucrat const & rhs );
		std::string 	getName(void) const;
		int 			getGrade(void) const;		
		void 			incrementGrade(void);
		void 			decrementGrade(void);
		void 			signForm(Form &n);
		void			executeForm (const Form& form);
};
std::ostream& operator<< (std::ostream& out, const Bureaucrat& f);

#endif