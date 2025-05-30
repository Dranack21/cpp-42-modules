#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr)
{
	if (!ptr)
		throw NullPointer();
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	if(!raw)
		throw NullPointer();
	return(reinterpret_cast<Data *>(raw));
}

const char* Serializer::NullPointer::what() const throw()
{
	return ("Do not use null pointer you fool\n");
}