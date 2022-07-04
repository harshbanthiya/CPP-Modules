/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:36:15 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 18:05:37 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */


/*
    Check for three arguments only 
    - Filename 
    - Second string 
    - Third string 

    first check if there are only three args no more no less - Wrong num of arguments error 
    second check if the filename is not directory  - File is a directory 
    filename can be opened  - File cannot be opened 

    Now I have to replace EVERY occurence of S1 with S2
    this loop will go on until end of string 
    Getline reads until new line
    - I can run find in a loop - first from 0 
        - if found then - position found + string length is the next iteration for find in S1

        

*/

// replace function (str to replace, str to replace with, match_position)
    
std::string replace_str(std::string line, std::string to_rep, std::string rep_with, std::size_t first_match_pos)
{
    std::string b4_match_pos;
    std::string after_match_pos;
    std::string new_string;

    b4_match_pos = line.substr(0, first_match_pos);
    after_match_pos = line.substr(first_match_pos + to_rep.length(), line.length());
    new_string = b4_match_pos + rep_with + after_match_pos;
    return (new_string);
}

void    find_and_replace(std::string line, std::string s1, std::string s2)
{
        std::size_t     str_pos_found;
    
        str_pos_found = line.find(s1);
        while (str_pos_found != -1)
        {
            std::cout << GREEN << "first string match found at: " << str_pos_found << RESET << '\n';
            line = replace_str(line, s1, s2, str_pos_found );
            std::cout << line << '\n';
            str_pos_found = line.find(s1);
        }
}


int main(int argc, char **argv)
{
    int             i;
    std::fstream    filestream;
    std::string     line;
    std::ofstream   replace_file;

    i = 0;
    if (argc == 4)
    {
        filestream.open(argv[1], std::fstream::in);
        if(filestream.is_open())
        {
            while (std::getline(filestream, line))
            {
               find_and_replace(line, argv[2], argv[3]);
            }   
            
        }   
        else 
            std::cout << RED << "Unable to open file" << RESET << '\n';
    }
    else 
    {
        std::cout << "Not enough or more " << '\n';
    }
    return (0);
}
