//
// Created by Hersh Banthiya on 2022-05-17.
//

#include "Contact.h"

Contact::Contact() {}

Contact::~Contact() {

}

void Contact::add_contact() {
    std::cout << "Enter First Name" << std::endl;
    std::cin >> first_name;
    std::cout << "Enter Family Name" << std::endl;
    std::cin >> last_name;
    std::cout << "Enter Phone Number" << std::endl;
    std::cin >> phone;
    std::cout << " Enter Email"<< std::endl;
    std::cin >> email;
    std::cout << " Enter secret " << std::endl;
    std::cin >> secret;
}

void Contact::display_contact() {
    std::cout << first_name << " " << last_name << " " << phone << " " << email << " " << secret << std::endl;
};

