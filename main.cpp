#include <iostream>
#include "Contact.h"

namespace welcome {
    std::string add = "ADD";
    std::string search = "SEARCH";
    std::string exit = "EXIT";

    void f() {
        std::cout << "Welcome to this rudimentary PhoneBook!" << std::endl;
        std::cout << "Type ADD or SEARCH to create and find a contact and TYPE EXIT to quit this program." << std::endl;
    }
}
int main()
{
    std::string input;
    welcome::f();
    while (1)
    {

        if (input.compare(welcome::add) == 0)
        {
            Contact contact;
            contact.addcontact();
        }
        if (input.compare(welcome::exit) == 0)
            break ;
    }
    return 0;
}
