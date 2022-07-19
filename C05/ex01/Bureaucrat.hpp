/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:44:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 11:32:13 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Bureaucrat
{

	private:
	std::string		Name;
	unsigned int 	grade; 
	
	public:

		Bureaucrat();
		Bureaucrat(std::string const n, unsigned int val);
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
		unsigned int 	getGrade(void) const;		
		void 			incrementGrade(void);
		void 			decrementGrade(void);
		void 			signForm(Form &n);
		friend std::ostream& operator<< (std::ostream& out, const Bureaucrat& f);
};

#endif