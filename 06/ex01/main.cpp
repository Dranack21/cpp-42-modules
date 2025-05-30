#include "Serializer.hpp"

int main()
{
	Data 	  *d;
	Data	  *e;
	uintptr_t t;

	try
	{
		d = new Data();
		d->str = "str";
		d->value = 10;
		t = Serializer::serialize(d);
		e = Serializer::deserialize(t);
		std::cout << "e values are: value = " << e->value << ", str = " << e->str << std::endl;
	}
	catch (std::exception& e) 
	{
		delete d;
        std::cout << "\nException caught: " << e.what() << std::endl;
    }
	delete	d;
}