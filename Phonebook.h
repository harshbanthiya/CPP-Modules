//
// Created by Hersh Banthiya on 2022-05-07.
//

#ifndef HELLOWORLD_PHONEBOOK_H
#define HELLOWORLD_PHONEBOOK_H
#include "Contact.h"
#define max_contacts 8

class Phonebook {
private:
    int     last_index;
    Contact contacts[max_contacts];
public:
    Phonebook();
    virtual ~Phonebook();
    void add_contact(std::string line);
    void search_contact(std::string line);
};


#endif //HELLOWORLD_PHONEBOOK_H
