#ifndef MUTANT_STACK
# define MUTANT_STACK

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{


	public:

		typedef typename std::stack<T>::container_type::iterator 	iterator;
		
		MutantStack<T> (void) {}
		MutantStack<T> (const MutantStack& rhs) {*this = rhs;}
		~MutantStack<T> (void) {}

		MutantStack& operator=(const MutantStack& rhs)
		{
			if (*this == rhs) {return *this;}
			
			this->c = rhs.c;

			return (*this);
		}

		iterator	begin (void)
		{
			return (this->c.begin());
		}

		iterator	end (void)
		{
			return (this->c.end());
		}
};



#endif
