/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:26:03 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/06/21 12:26:05 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


Phonebook::Phonebook() {
    current_index = -1;
}

Phonebook::~Phonebook() {

}

void Phonebook::add_to_phonebook(int index, std::string (&contact_buff)[5])
{
    current_index = index;
    contacts[current_index].index = current_index;
    contacts[current_index].add_contact(contact_buff);
}

void Phonebook::display_all_contacts() {
    int     i = 0;
    while (i < MAX_LIMIT)
        contacts[i++].display_contact();
}

void Phonebook::display_contact_by_index(int index) {
    if (index >= 0 && index < MAX_LIMIT)
        contacts[index].display_contact();
    else
        std::cout << "wrong index! out of range. Please try again!" << std::endl;
}

