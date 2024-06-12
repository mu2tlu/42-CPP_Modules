#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public:
		//Destructor
		virtual ~Base(void);
};


class A : public Base {};

class B : public Base {};

class C : public Base {};

//Non Member Functions
Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
