/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:21:30 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/28 12:22:00 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#include <ctime>

#define SIZE 750

int main(int, char**)
{
	Array<int> empty(0);
    Array<int> numbers(SIZE);
    int* tab = new int[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        const int value = rand();
        numbers[i] = value;
        tab[i] = value;
    }
    
	// try assignment operator test
    {
        Array<int> tmp = numbers;
    }

    for (int i = 0; i < SIZE; i++)
    {
        std::cout	<< "Array[" << i << "] is " << numbers[i]
					<< ", Tab[" << i << "] is " << tab[i] << std::endl;
    }
	
    try
    {
        numbers[-23] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	
    try
    {
        numbers[SIZE] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	try
    {
        numbers[100000] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete [] tab;
    return 0;
}

