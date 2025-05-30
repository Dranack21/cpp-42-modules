#pragma once

#include <iostream>
#include <stdint.h>

typedef struct Data
{
	int 		value;
	std::string str;
} Data;
 
class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		~Serializer();
	public:
		static	uintptr_t 	serialize(Data* ptr);
		static	Data* 		deserialize(uintptr_t raw);
	class	NullPointer: public std::exception
	{
		public:
			const char * what() const throw();
	};
	
};