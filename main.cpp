#include <iostream>
#include "Phonebook.h"

void print_phonebook_menu()
{
    std::cout << "Welcome to this rudimentary phonebook!" << std::endl;
    std::cout << "To add a contact please type ADD" << std::endl;
    std::cout << "To display all contacts please type SEARCH" << std::endl;
    std::cout << "To exit this program please type EXIT" << std::endl;
}
int main() {

    int             i;
    Phonebook       phonebook;
    std::string     prompt;
    int             idx_prmpt;
    i = 0;
    print_phonebook_menu();
    while (std::getline(std::cin, prompt))
    {
        if (prompt == "ADD")
        {
            if (i >= 0 && i < MAX_LIMIT)
                phonebook.add_to_phonebook(i++);
            else
            {
                i = i - MAX_LIMIT;
                phonebook.add_to_phonebook(i++);
            }
        }
        if (prompt == "SEARCH")
        {
            phonebook.display_all_contacts();
            //std::cout << "To see details of a particular contact type the INDEX_NUMBER or type BACK to go back" << std::endl;
            //std::cin >> prompt;
            /*
            while (1)
            {
                if (prompt == "BACK")
                    break ;

                if ( idx_prmpt >= ((int)std::stoi(prompt)) && idx_prmpt < ((int)(std::stoi(prompt) )))
                {
                    if (idx_prmpt >= 0 && idx_prmpt <= 0 + MAX_LIMIT )
                        phonebook.display_contact_by_index(idx_prmpt);
                    else
                        continue ;
                }
            }
             */
        }
        if (prompt == "EXIT")
            break ;
    }

    return 0;
}
