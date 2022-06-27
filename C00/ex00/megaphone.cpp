/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:10:23 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/06/21 11:10:25 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// if argc is 1 or more 
// if 1 print - "LOUD AND UNBEARABLE FEEDBACK NOISE"
// else print - Convert all lowercase alphabets in uppercase  

char *uppercaseStr(char *str)
{
    int     i;

    i = 0;
    if (str[i])
    {
        while (str[i])
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
            i++;
        }
    }
    return (str);
}

int main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
    else 
    {
        while (++i < argc)
            std::cout << uppercaseStr(argv[i]);
        std::cout << '\n';
    }
    return (0);
}