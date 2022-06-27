/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:26:34 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/06/21 12:26:36 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.hpp"

void prompt()
{
    std::cout << "\nWELCOME TO THE SIMPLE PHONEBOOK!" << '\n';
    std::cout << "\nYou can save upto 8 contacts | The 9th contact will overwrite the first one." << '\n'; 
    std::cout << "\nOnly three commands are accepted | ADD SEARCH EXIT | Any other command entered will give you an error. " << '\n'; 
    std::cout << "\n----------------------------------------------------------------------------------------------------\n " << '\n'; 
    std::cout << ">> ADD to Add a contact - Please note, contact will not be saved if any field is left empty. " << '\n'; 
    std::cout << "\n>> SEARCH to display all current contacts with index \n\t-- After search results are displayed -> You can enter the index to access individual contact details " << '\n'; 
    std::cout << "\n>> EXIT to exit the program, please note all the contact info will be lost as soon as you exit. " << '\n'; 
    std::cout << "\n----------------------------------------------------------------------------------------------------\n " << '\n'; 
}

int check_empty_fill_buff(std::string (&contact_buff)[5])
{
    int     i;

    i = 0;
    std::cout << "Enter First Name" << '\n';    
    std::getline(std::cin, contact_buff[0]);
    std::cout << "Enter Family Name" << '\n';
    std::getline(std::cin, contact_buff[1]);
    std::cout << "Enter Nick Name" << '\n';
    std::getline(std::cin, contact_buff[2]);
    std::cout << "Enter phone"<< '\n';
    std::getline(std::cin, contact_buff[3]);
    std::cout << "Enter secret" << '\n';
    std::getline(std::cin, contact_buff[4]);
    while (i <= 4)
    {
        if (contact_buff[i].empty())
            return(0);
        i++;
    }
    return (1);
}

int main() {

    int             i;
    Phonebook       phonebook;
    std::string     contact_buff[5];
    std::string     command;
    int             display_index;
    int             contact_index;
    i = 0;
    display_index = 0;
    contact_index = 0;
    prompt();
    while (1)
    {
        std::getline(std::cin, command);
        if (command == "ADD" || command == "SEARCH" || command == "EXIT" || !command.empty())
        {
            if (command == "ADD")
            {
                if (i > MAX_LIMIT)
                    i = 0;
                if (check_empty_fill_buff(contact_buff))
                {
                    phonebook.add_to_phonebook(i++, contact_buff);
                    std::cout << "Contact Created!" << '\n' ;
                    if (display_index <= MAX_LIMIT)
                        display_index++;
                }
                else 
                    std::cout << "empty field detected" << '\n';
            }
            if (command == "SEARCH")
            {
                phonebook.display_all_contacts(display_index);
                std::cout << "Enter the contact index to see complete details" << '\n';
                std::cin >> contact_index;
                phonebook.display_contact_by_index(contact_index);
            }
           
            if (command == "EXIT")
                break ;
            
        }
    }

    return 0;
}
