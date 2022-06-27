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
#include <iomanip>

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

void Phonebook::display_contact_by_index(int index) {
    if (index >= 0 && index < MAX_LIMIT)
        contacts[index].display_contact_by_index();
    else
        std::cout << "wrong index! out of range. Please try again!" << std::endl;
}

void Phonebook::display_all_contacts(int display_index) {
    int     i = 0;

    std::cout << std::right << std::setw(10) << "Index" << " | " ;
    std::cout << std::right << std::setw(10) << "First Name" << " | ";
    std::cout << std::right << std::setw(10) << "Last Name" << " | ";
    std::cout << std::right << std::setw(10) << "Nickname" << '\n';
    while (i < display_index)
        contacts[i++].display_contact();
    
}

