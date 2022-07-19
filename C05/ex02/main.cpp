/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 14:36:37 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    Bureaucrat A;
   
    PresidentialPardonForm B;
   
    std::cout << B << '\n';      
    B.execute(A);
    
    return (0);
}