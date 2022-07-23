/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:07:37 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 15:25:25 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main ()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Try number " << i << std::endl;
		
		{
			Base* base = generate();
			identify (base);
			delete base;
		}
		{
			Base& base = *(generate());
			identify(base);
			delete &base;
		}
	}
}