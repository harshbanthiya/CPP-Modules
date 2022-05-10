#include <iostream>
#include "Contact.h"
#include "Phonebook.h"

void print_menu()
{
    std::cout << "Welcome to this rudimentary phonebook!" << std::endl;
    std::cout << "To add a contact enter ADD" << std::endl;
    std::cout << "To search the phonebook enter SEARCH" << std::endl;
    std::cout << "To exit the phonebook enter EXIT" << std::endl;
}
int main()
{
    Phonebook   phonebook;
    std::string line;
    print_menu();
    while (std::getline(std::cin, line))
    {

        if (line == "ADD")
            phonebook.add_contact(line);
        if (line == "SEARCH")
            phonebook.search_contact(line);
        if (line == "EXIT")
            return (0);
        else
            std::cout << "Input not recognised, please try again !" << std::endl;
    }
    return 0;
}
