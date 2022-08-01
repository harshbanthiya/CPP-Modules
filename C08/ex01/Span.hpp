
#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdint.h>

class Span
{
	private:
		unsigned int 			_size;
		std::vector<int>	    _vector;
	public:

		typedef std::vector<int>::iterator Iterator;

		Span (void);
		Span (const Span&);
		Span (unsigned int);
		~Span (void);

		Span& 	operator=(const Span&);

		void	addNumber (int);
		int		shortestSpan (void);
		int		longestSpan (void);
		void	addRange (Iterator start, Iterator end);

		void	putSpan (void)
		{
			std::vector<int>::iterator it = _vector.begin();
			std::vector<int>::iterator ite = _vector.end();

			while(it != ite)
				std::cout << *it++ << '\n';
		}

		class SpanIsEmpty : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "the current Span is empty";
				}
		};

		class CannotAddNumberInSpan : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "cannot add number in Span";
				}
		};

		class CannotAddRange : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "cannot add range in Span";
				}
		};
};

#endif