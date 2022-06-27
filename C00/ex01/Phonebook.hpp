/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:26:19 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/06/21 12:26:21 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_PHONEBOOK_H
#define PHONEBOOK_PHONEBOOK_H
#include "Contact.hpp"
#define MAX_LIMIT 8

class Phonebook {
private:
    int     current_index;
public:
    Contact contacts[MAX_LIMIT];
    Phonebook();
    virtual ~Phonebook();
    void add_to_phonebook(int index, std::string (&contact_buff)[5]);
    void display_all_contacts(int display_index);
    void display_contact_by_index(int index);
};


#endif //PHONEBOOK_PHONEBOOK_H
