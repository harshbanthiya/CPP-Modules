//
// Created by Hersh Banthiya on 2022-05-17.
//

#ifndef PHONEBOOK_PHONEBOOK_H
#define PHONEBOOK_PHONEBOOK_H
#include "Contact.h"
#define MAX_LIMIT 3

class Phonebook {
private:
    int     current_index;
public:
    Contact contacts[MAX_LIMIT];
    Phonebook();
    virtual ~Phonebook();
    void add_to_phonebook(int index);
    void display_all_contacts();
    void display_contact_by_index(int index);
};


#endif //PHONEBOOK_PHONEBOOK_H
