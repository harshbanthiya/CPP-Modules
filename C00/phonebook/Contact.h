//
// Created by Hersh Banthiya on 2022-05-17.
//

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
    Contact();
    virtual ~Contact();
    void    add_contact();
    void    display_contact();
};


#endif //PHONEBOOK_CONTACT_H
