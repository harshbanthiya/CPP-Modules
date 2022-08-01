/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbanthiy <hbanthiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:32:27 by hbanthiy          #+#    #+#             */
/*   Updated: 2022/08/01 11:32:40 by hbanthiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span (void) : _size(0), _vector(){	}

Span::Span (const Span& rhs){*this = rhs;}

Span::Span (unsigned int size) : _size(size), _vector(){}

Span::~Span (void){}

Span& Span::operator= (const Span& rhs)
{
	if (this == &rhs) {return (*this);};
	
	this->_size = rhs._size;
	this->_vector = std::vector<int>(rhs._vector);

	return (*this);
}

void Span::addRange (Iterator start, Iterator end)
{
	if (std::distance (start, end) + _vector.size() >= _size)
		throw Span::CannotAddRange();
	_vector.insert (_vector.end(), start, end);
}

void Span::addNumber (int n)
{
	if (_vector.size() >= _size)
		throw Span::CannotAddNumberInSpan();
	_vector.push_back(n);
}

int Span::shortestSpan (void)
{
	std::vector<int>::iterator it1 = _vector.begin();
	std::vector<int>::iterator ite = _vector.end();
	int min = INT_MAX;

	for(; it1 != ite; it1++)
	{
		for (std::vector<int>::iterator it2 = (it1 + 1); it2 != ite; it2++)
			if (std::abs(*it1 - *it2) < min)
				min = std::abs(*it1 - *it2);
	}
	return min;
}

int Span::longestSpan (void)
{
	return (*max_element(_vector.begin(), _vector.end()) - *min_element(_vector.begin(), _vector.end()));
}