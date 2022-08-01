/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:32:24 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/08/01 12:46:49 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(50);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << '\n' << "Span : " << '\n' << '\n';

		sp.putSpan();

		std::cout << "shortest : " << sp.shortestSpan() << '\n';
		std::cout << "longest : " << sp.longestSpan() << '\n';

		std::vector<int> tab;
		tab.push_back(1);
		tab.push_back(3);
		tab.push_back(5);
		tab.push_back(7);
		tab.push_back(9);

		sp.addRange(tab.begin(), tab.end());

		std::cout << '\n' << "Span : " << '\n' << '\n';

		sp.putSpan();

		std::cout << "shortest : " << sp.shortestSpan() << '\n';
		std::cout << "longest : " << sp.longestSpan() << '\n';

		tab.push_back(13);
		tab.push_back(354);
		tab.push_back(35);
		tab.push_back(136);
		tab.push_back(185);

		sp.addRange(tab.begin() + 5, tab.end());


		std::cout << '\n' << "Span : " << '\n' << '\n';

		sp.putSpan();
			
		std::cout << "shortest : " << sp.shortestSpan() << '\n';
		std::cout << "longest : " << sp.longestSpan() << '\n';
		
	} catch (std::exception &e)
	{
		std::cout << e.what() << '\n';
	}
	return 0;
}