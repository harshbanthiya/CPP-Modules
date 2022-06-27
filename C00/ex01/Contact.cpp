/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:25:38 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/06/21 12:25:42 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string.h>
#include <iomanip>

Contact::Contact() {
}

Contact::~Contact() {
}

void Contact::add_contact(std::string (&contact_buff)[5])
{
    first_name = contact_buff[0];
    last_name = contact_buff[1];
    nickname = contact_buff[2];
    phone = contact_buff[3];
    secret = contact_buff[4];
}


void Contact::display_contact() {
    std::cout << std::right << std::setw(10) << index << " | ";
    first_name.length() >= 9 ? std::cout << std::right << std::setw(10) << first_name.substr(0, 9) << '.' << "| " : std::cout << std::right << std::setw(10) << first_name << " | " ;
    last_name.length() >= 9 ? std::cout << std::right << std::setw(10) << last_name.substr(0, 9) << '.' << "| " : std::cout << std::right << std::setw(10) << last_name << " | " ;
    nickname.length() >= 9 ? std::cout << std::right << std::setw(10) << nickname.substr(0, 9) << '.' << '\n' : std::cout << std::right << std::setw(10) << nickname << '\n' ;
};

void    Contact::display_contact_by_index(){
    std::cout << "First Name: " << first_name << '\n';
    std::cout << "Last Name: " << last_name << '\n';
    std::cout << "Nick Name: " << nickname << '\n';
    std::cout << "Phone: " << phone << '\n';
    std::cout << "Secret: " << secret << '\n';
}