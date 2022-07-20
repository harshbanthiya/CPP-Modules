/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:23 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:52:29 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
    std::string Target;
    public:
    RobotomyRequestForm ();  
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    void execute (Bureaucrat const & executor) const
};