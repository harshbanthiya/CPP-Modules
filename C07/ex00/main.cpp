/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:13:20 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/26 15:51:24 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int  a = 1;
    int  b = 2;

    float c = 3.5f;
    float d = 5.5f;


    double e = 9.9999;
    double f = 10.131214;

    char   g = 'A';
    char   h = 'B';

    std::cout << "Swap ------ \n";

    std::cout << "INT - Before Swap - " << "a : " <<  a << " b : " << b << '\n';
    swap(a, b);
    std::cout << "INT - After Swap - " << "a : " <<  a << " b : " << b << '\n';

    std::cout << "FLOAT - Before Swap - " << "c : " <<  c << " d : " << d << '\n';
    swap(c, d);
    std::cout << "FLOAT - After Swap - " << "c : " <<  c << " b : " << d << '\n';

    std::cout << "DOUBLE - Before Swap - " << "e : " <<  e << " f : " << f << '\n';
    swap(e, f);
    std::cout << "DOUBLE - After Swap - " << "e : " <<  e << " f : " << f << '\n';

    std::cout << "CHAR- Before Swap - " << "g : " <<  g << " h : " << h << '\n';
    swap(g, h);
    std::cout << "CHAR - After Swap - " << "g : " <<  g << " h : " << h << '\n';

    std::cout << "Swap fin ------ \n";

    std::cout << "\nMin ------ \n";

    std::cout << "INT - " << "a : " <<  a << " b : " << b << " min is : " << min(a, b) << "\n";
    std::cout << "FLOAT - " << "c : " <<  c << " d : " << d << " min is : " << min(c, d) << "\n";
    std::cout << "Double - " << "e : " <<  e << " f : " << f << " min is : " << min(e, f) << "\n";
    std::cout << "Char - " << "g : " <<  g << " h : " << h << " min is : " << min(g, h) << "\n";

    std::cout << "Min fin ------ \n";

    std::cout << "\nMax ------ \n";

    std::cout << "INT - " << "a : " <<  a << " b : " << b << " max is : " << max(a, b) << "\n";
    std::cout << "FLOAT - " << "c : " <<  c << " d : " << d << " max is : " << max(c, d) << "\n";
    std::cout << "Double - " << "e : " <<  e << " f : " << f << " max is : " << max(e, f) << "\n";
    std::cout << "Char - " << "g : " <<  g << " h : " << h << " max is : " << max(g, h) << "\n";

    std::cout << "Max fin ------ \n";
}