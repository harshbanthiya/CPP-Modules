/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheeed <sheeed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:07:37 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 15:16:28 by sheeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main (int ac, char** av)
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