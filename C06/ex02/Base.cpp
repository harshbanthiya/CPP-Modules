/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:19:07 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 15:38:31 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate (void)
{
	int i = std::rand() % 3;

	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
}

void identify (Base& p)
{
	
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A - " << "reference address : " << &a << '\n' ;
		return;	
	} catch (std::bad_cast& e) {}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B - " << "reference address : " << &b << '\n' ;
		return;	
	} catch (std::bad_cast& e) {}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C - " << "reference address : " << &c << '\n' ;
		return;	
		
	} catch (std::bad_cast& e) {}
}

void identify (Base* p)
{
	try
	{
		A* a = dynamic_cast<A*>(p);
		if (a)
		{
			std::cout << "A - " << "pointer address : " << a << '\n' ;
			return;	
		}
	} catch (std::bad_cast& e) {}

	try
	{
		B* b = dynamic_cast<B*>(p);
		if (b)
		{
			std::cout << "B - " << "pointer address : " << b << '\n' ;
			return;	
		}
	} catch (std::bad_cast& e) {}

	try
	{
		C* c = dynamic_cast<C*>(p);
		if (c)
		{
			std::cout << "C - " << "pointer address : " << c << '\n' ;
			return;	
		}
	} catch (std::bad_cast& e) {}
}