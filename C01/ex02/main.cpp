/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:27:39 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 15:29:15 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *strptr = &str;
    std::string &strref = str;

    std::cout << &str << '\n';
    std::cout << strptr << '\n';
    std::cout << &strref << '\n';

    std::cout << str << '\n';
    std::cout << *strptr << '\n';
    std::cout << strref << '\n';
}
