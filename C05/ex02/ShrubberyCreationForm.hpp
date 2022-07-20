/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:28 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/20 10:48:43 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
    std::string Target;
    public:
    ShrubberyCreationForm ();  
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
    void execute (Bureaucrat const & executor) const;
};