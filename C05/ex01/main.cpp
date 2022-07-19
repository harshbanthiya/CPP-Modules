/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:02:43 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/19 12:54:05 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{

    Bureaucrat D("Dickens", 90);
     std::cout << D;
    
    Form A("BBGUN", false, 90, 90);
    std::cout << A << '\n';

    D.signForm(A);
    
    return (0);
}