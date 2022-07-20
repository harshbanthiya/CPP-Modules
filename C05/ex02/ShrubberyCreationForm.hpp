/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:35:28 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 14:00:07 by hbanthiy         ###   ########.fr       */
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
};