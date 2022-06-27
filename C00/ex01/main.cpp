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
    std::cout << "Enter Phone Number" << '\n';
    std::getline(std::cin, contact_buff[2]);
    std::cout << "Enter Email"<< '\n';
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
    i = 0;
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
                }
                else 
                    std::cout << "empty field detected" << '\n';
            }
            if (command == "SEARCH")
            {
                phonebook.display_all_contacts();
         /*
            //std::cout << "To see details of a particular contact type the INDEX_NUMBER or type BACK to go back" << std::endl;
            //std::cin >> prompt;

            while (1)
            {
                if (line == "BACK")
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
            if (command == "EXIT")
                break ;
            
        }
        else 
        {
            std::cout << "You have entered a bad commnand or empty command, use ADD, SEARCH, EXIT only" << '\n';
        }
    }

    return 0;
}
/*
int main()
{
    Phonebook Dir;
    std::string line;

    std::cout << "Enter your command: ";
    while (1)
    {
        std::getline(std::cin, line);
        if ( line == "ADD" || line == "add")
            std::cout << "You have se";
        if (line != "EXIT" || line != "exit")
            break;
    }
    return (0);
 }
 */