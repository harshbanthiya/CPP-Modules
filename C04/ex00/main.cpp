/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 12:32:19 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
  
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout  << j->getType() << " " << std::endl;
    std::cout  << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* m = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout  << m->getType() << " " << std::endl;
    std::cout  << wc->getType() << " " << std::endl;
    
    wc->makeSound(); //will output the cat sound!
    m->makeSound();


    delete meta;
    delete j;
    delete i;
    delete m;
    delete wc;
    
    return 0;

}