/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:44:56 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/18 13:49:23 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

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
		void 			signForm(void);
		friend std::ostream& operator<< (std::ostream& out, const Bureaucrat& f);
};

#endif