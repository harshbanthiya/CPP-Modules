/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 14:14:04 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    Dog a,b,c;
    Cat d,e,f;
    //Animal arr[10] = { a, b, c, d, e, f};  
    //Animal ne;

    Dog* jj = new Dog();
    Cat* ii = new Cat();

    a.makeSound();
    a.setIdea(0, "Need Tennis Ball, Play Now!");
    std::cout  << "Current Idea: " << a.getIdea(0) << '\n';
    
    b.makeSound();
    b.setIdea(0, "Finally I feel good, gonna catch my Tail TODAY!");
    std::cout  << "Current Idea: " << b.getIdea(0) << '\n';

    d.makeSound();
    d.setIdea(0, "Why isnt this Human not cleaning my litter, incompetent!");
    std::cout << "Current Idea: " <<  d.getIdea(0) << '\n';

    ii->makeSound();
    ii->setIdea(0, "Worship me or you will see my asshole again!");
    std::cout << "Current Idea: " <<  ii->getIdea(0) << '\n';
    
    jj->makeSound();
    jj->setIdea(0, "Walk Now !! Play Now !! TREATS YESSSSSS!");
    std::cout << "Current Idea: " <<  jj->getIdea(0) << '\n';

    delete jj;
    delete ii;
    
    return 0;

}