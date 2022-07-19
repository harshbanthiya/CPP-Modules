/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:36:19 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 14:32:44 by hbanthiy         ###   ########.fr       */
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
    void execute(const Bureaucrat &b);
};