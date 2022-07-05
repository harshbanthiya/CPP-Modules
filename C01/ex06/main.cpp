/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:10:59 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/05 16:40:03 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
int main()
{
    Harl a;
    a.complain("DEBUG");
    a.complain("INFO");
    a.complain("WARNING");
    a.complain("ERROR");
    a.complain("MAC");
    return (0);
}