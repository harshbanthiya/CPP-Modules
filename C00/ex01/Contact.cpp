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

Contact::Contact() {}

Contact::~Contact() {

}

void Contact::add_contact(std::string (&contact_buff)[5])
{
    first_name = contact_buff[0];
    last_name = contact_buff[1];
    phone = contact_buff[2];
    email = contact_buff[3];
    secret = contact_buff[4];
}

void Contact::display_contact() {
    std::cout << first_name << " " << last_name << " " << phone << " " << email << " " << secret << '\n';
};

