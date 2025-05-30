#include "Base.hpp"


Base::~Base()
{

}
Base * generate(void)
{
	int i;

	std::srand(static_cast<unsigned int>(std::time(NULL)));
	i = rand();
	if (i % 3 == 0)
		return new A;
	if (i % 3 == 1)
		return new B;
	if (i % 3 == 2)
		return new C;
	return(NULL);
}

void identify(Base* p)
{
	if(dynamic_cast<A *>(p))
		std::cout << "The actual pointer type is A" << std::endl;
	if(dynamic_cast<B *>(p))
		std::cout << "The actual pointer type is B" << std::endl;
	if(dynamic_cast<C *>(p))
		std::cout << "The actual pointer type is C" << std::endl;
}

void identify(Base& p)
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "The actual pointer type is A" << std::endl;
	}
	catch(...)
	{}
	try 
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "The actual pointer type is B" << std::endl;
	}
	catch(...)
	{}
	try 
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "The actual pointer type is C" << std::endl;
	}
	catch(...)
	{}
}

int main()
{
	Base*	base;
	Base*	base2;
	Base*	base3;

	base = generate();
	sleep(1);
	base2 = generate();
	sleep(1);
	base3 = generate();

	identify(base);
	identify(base2);
	identify(base3);
	identify(*base);
	identify(*base2);
	identify(*base3);
	return(0);
}