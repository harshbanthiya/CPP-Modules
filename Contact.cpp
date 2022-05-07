//
// Created by Hersh Banthiya on 2022-05-07.
//

#include "Contact.h"

Contact::Contact()
{
    std::cout << "Enter First Name: " << std::endl;
    std::cin >> firstname;
    std::cout << "Enter Last Name: " << std::endl;
    std::cin >> lastname;
    std::cout << "Enter Phone Number: " << std::endl;
    std::cin >> phone_number;
    std::cout << "Enter your darkest secret: " << std::endl;
    std::cin >> darkest_secret;
    std::cout << "Contact Created Successfully for " << firstname << " !" << std::endl;
}

Contact::~Contact() {

}

void Contact::addcontact() {
    std::cout << "Enter First Name: " << std::endl;
    std::cin >> firstname;
    std::cout << "Enter Last Name: " << std::endl;
    std::cin >> lastname;
    std::cout << "Enter Phone Number: " << std::endl;
    std::cin >> phone_number;
    std::cout << "Enter your darkest secret: " << std::endl;
    std::cin >> darkest_secret;
    if (firstname.empty() || lastname.empty() || phone_number.empty() || darkest_secret.empty()) {
        std::cout << "Error! Contact cannot be created as one of the field is left blank!" << std::endl;
    }
    else
        std::cout << "Contact created successfully for " << firstname << " !" << std::endl;

}

