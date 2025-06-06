#include "Array.hpp"

int main()
{
	try
	{
		Array<int> t(5);
		for(int i = 0; i < t.size(); i++)
		{	
			t[i]= 727;
		}
		// Print the array
		for(int i = 0; i < 5; i++)
		{
			std::cout << "t[" << i << "] = " << t[i] << std::endl;
		}
		Array<char> c(5);
		for(int i = 0; i < c.size(); i++)
		{	
			c[i]= 'e';
		}
		// Print the array
		for(int i = 0; i < 5; i++)
		{
			std::cout << "c[" << i << "] = " <<c[i] << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
}