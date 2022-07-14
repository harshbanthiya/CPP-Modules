/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:16 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/14 13:41:39 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

# define ANIMAL_ARR 10

int	main(void)
{
	Animal* arr[ANIMAL_ARR];

	for (int i = 0; i < ANIMAL_ARR; i++)
	{
		if ((i % 2) == 0)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	std::cout << '\n';

	for (int i = 0; i < ANIMAL_ARR; i++)
		std::cout << "This animal is a " << arr[i]->getType() << "." << '\n';

	std::cout << '\n';

	for (int i = 0; i < ANIMAL_ARR; i++)
		delete (arr[i]);

	std::cout << '\n';

	Animal* cat = new Cat();
	std::string s1 = "Worship me or you will see my Asshole again!";
	std::string s2 = "Stop watching TV and clean my litter";

	cat->setIdea(2, s2);
	cat->setIdea(67, s1);
	cat->setIdea(33, s2);

	std::cout << "Idea n.2 is " << cat->getIdea(2) << '\n';
	std::cout << "Idea n.67 is " << cat->getIdea(67) << '\n';
	std::cout << "Idea n.33 is " << cat->getIdea(33) << '\n';
	std::cout << "Idea n.1 is " << cat->getIdea(1) << '\n';

	delete (cat);

	std::cout << '\n';

	return (0);
}
