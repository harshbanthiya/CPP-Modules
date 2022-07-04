/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 10:52:58 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/04 14:59:25 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.h"

int main() {
    Zombie stackz("stacky");
    stackz.announce();

    Zombie *heapy = newZombie("heapy");
    heapy->announce();

    randomChump("chumpstack");
    delete(heapy);
    
    std::cout << "Zombie deleted from heap" << '\n';
    return 0;
}
