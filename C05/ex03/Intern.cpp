#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
}

Intern::~Intern()
{
}

Intern &				Intern::operator=( Intern const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}