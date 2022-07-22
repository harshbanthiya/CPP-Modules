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
		std::cout << "A" << std::endl;
		return;	
	} catch (std::bad_cast& e) {}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::bad_cast& e) {}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
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
			std::cout << "A" << std::endl;
			return;	
		}
	} catch (std::bad_cast& e) {}

	try
	{
		B* b = dynamic_cast<B*>(p);
		if (b)
		{
			std::cout << "B" << std::endl;
			return;	
		}
	} catch (std::bad_cast& e) {}

	try
	{
		C* c = dynamic_cast<C*>(p);
		if (c)
		{
			std::cout << "C" << std::endl;
			return;	
		}
	} catch (std::bad_cast& e) {}
}