/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:36:19 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 12:34:23 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
    std::string Target;

    public:
    PresidentialPardonForm ();  
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const & src );
    
    PresidentialPardonForm&	operator=(PresidentialPardonForm const & rhs);
    void execute(Bureaucrat const &b) const;
};