//
// Created by Hersh Banthiya on 2022-05-07.
//

#ifndef HELLOWORLD_CONTACT_H
#define HELLOWORLD_CONTACT_H


#include <string>
#include <iostream>

class Contact {
public:
    std::string firstname;
    std::string lastname;
    std::string phone_number;
    std::string darkest_secret;

    Contact();
    virtual ~Contact();
    void addcontact();
};


#endif //HELLOWORLD_CONTACT_H
