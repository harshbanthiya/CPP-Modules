/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:36:15 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/05 13:06:29 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

    
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

void    find_and_replace(std::string line, std::string s1, std::string s2, std::ofstream &outfile)
{
        std::size_t     str_pos_found;
      
        
        str_pos_found = line.find(s1);
        while (str_pos_found != -1)
        {
            //std::cout << GREEN << "first string match found at: " << str_pos_found << RESET << '\n';
            line = replace_str(line, s1, s2, str_pos_found );
           // outfile << line << '\n';
            str_pos_found = line.find(s1);
        }
        outfile << line << '\n';
}


int main(int argc, char **argv)
{
    int             i;
    std::fstream    filestream;
    std::string     line;
    std::string     file_name_replace;
    
    i = 0;
    if (argc == 4)
    {
        filestream.open(argv[1], std::fstream::in);
        if(filestream.is_open())
        {
            file_name_replace = argv[1] + (std::string)".replace";
            std::ofstream   outfile(file_name_replace);
            while (std::getline(filestream, line))
            {
               find_and_replace(line, argv[2], argv[3], outfile);
            }   
            outfile.close();   
            filestream.close();
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
