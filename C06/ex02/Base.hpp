/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:08:06 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 15:24:09 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
#include <iostream>

class Base
{
    public:
    
    virtual ~Base(void){};

};

class A : public Base
{
    public:
        A (void) {std::cout << "Class A constructor called\n";};
};

class B : public Base
{
    public:
        B (void) {std::cout << "Class B constructor called\n";};
};

class C : public Base
{
    public:
        C (void) {std::cout << "Class C constructor called\n";};
};

Base    *generate(void);
void    identify(Base *p);
void    identify(Base &p);

#endif 