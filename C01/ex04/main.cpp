/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:36:15 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/07 11:25:24 by hbanthiy         ###   ########.fr       */
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
        while (str_pos_found != std::string::npos)
        {
            line = replace_str(line, s1, s2, str_pos_found );
            str_pos_found = line.find(s1);
        }
        outfile << line << '\n';
}


int main(int argc, char **argv)
{
    
    if (argc != 4 || std::strlen(argv[1]) == 0 || std::strlen(argv[2]) == 0 || std::strlen(argv[3]) == 0)
    {
        std::cout << RED << "Error! Corrent usage: ./sed filename string_to_find string_to_replace" <<  RESET << '\n';
        return (1);
    }
    
    int             i;
    std::fstream    filestream;
    std::string     line;
    std::string     file_name_replace;
    
    i = 0;
    filestream.open(argv[1], std::fstream::in);
    if (filestream.fail())
    {
        std::cout << RED << "Error! Cannot open file: " << argv[1] << RESET << '\n';
        return (1);
    }
    file_name_replace = argv[1] + (std::string)".replace";
    std::ofstream   outfile(file_name_replace);
    if (outfile.fail())
    {
        std::cout << RED << "Error! Cannot create replace file: " << file_name_replace << RESET <<'\n';
        return (1);
    }
    while (std::getline(filestream, line))
    {
        find_and_replace(line, argv[2], argv[3], outfile);
    }   
    outfile.close();   
    filestream.close();
    
    return (0);
}
