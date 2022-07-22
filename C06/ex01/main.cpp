/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:23:10 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/07/22 14:04:48 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data data("4u83290432052408fnruei3892873902");

	std::cout << "data address : " << &data << ", value : " << data.getData()  << std::endl;

	uintptr_t PTR = serialize((Data*)&data);

	std::cout << "PTR address returned by serialize : " << PTR << std::endl;

	std::cout << "Data address returned by deserialize : " << deserialize(PTR)  << ", value : " << deserialize(PTR)->getData()<< std::endl;
    return (0);
}
