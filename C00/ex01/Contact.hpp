/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:25:51 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/06/21 12:25:53 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CONTACT_H
#define PHONEBOOK_CONTACT_H
#include <iostream>

class Contact {
private:
    std::string first_name;
    std::string last_name;
    std::string phone;
    std::string email;
    std::string secret;
public:
    int     index;
    Contact ();
    virtual ~Contact();
    void    add_contact(std::string (&contact_buff)[5]);
    void    display_contact();
};


#endif //PHONEBOOK_CONTACT_H
