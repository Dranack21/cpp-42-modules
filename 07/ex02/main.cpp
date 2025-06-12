#include "Array.hpp"
#include <string>


#include "Array.hpp"

// int main()
// {
// 	try
// 	{
// 		Array<int> t(5);
// 		for(int i = 0; i < t.size(); i++)
// 		{	
// 			t[i]= 727;
// 		}
// 		// Print the array
// 		for(int i = 0; i < t.size(); i++)
// 		{
// 			std::cout << "t[" << i << "] = " << t[i] << std::endl;
// 		}
// 		Array<char> c(5);
// 		for(int i = 0; i < c.size(); i++)
// 		{	
// 			c[i]= 'e';
// 		}
// 		// Print the array
// 		for(int i = 0; i < c.size(); i++)
// 		{
// 			std::cout << "c[" << i << "] = " <<c[i] << std::endl;
// 		}
// 		Array<int> t2(t);
// 		for(int i = 0; i < t2.size(); i++)
// 		{
// 			std::cout << "t2[" << i << "] = " << t2[i] << std::endl;
// 		}
// 		Array<char> c2(10);
// 		for(int i = 0; i < c2.size(); i++)
// 		{	
// 			c2[i]= 'O';
// 		}
// 		for(int i = 0; i < c2.size(); i++)
// 		{
// 			std::cout << "c2[" << i << "] = " <<c2[i] << std::endl;
// 		}
// 		c2 = c;
// 		for(int i = 0; i < c2.size(); i++)
// 		{
// 			std::cout << "c2[" << i << "] = " <<c2[i] << std::endl;
// 		}
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what();
// 	}
// }

int main() 
{
	try {
		std::cout << "=== INT ARRAY ===" << std::endl;
		Array<int> intArr(5);
		for (int i = 0; i < 5; ++i)
			intArr[i] = i * 10;
		for (int i = 0; i < 5; ++i)
			std::cout << intArr[i] << ' ';
		std::cout << "\n";

		std::cout << "=== FLOAT ARRAY ===" << std::endl;
		Array<float> floatArr(3);
		floatArr[0] = 3.14f;
		floatArr[1] = 2.718f;
		floatArr[2] = 1.618f;
		for (int i = 0; i < floatArr.size(); ++i)
			std::cout << floatArr[i] << ' ';
		std::cout << "\n";

		std::cout << "=== STRING ARRAY ===" << std::endl;
		Array<std::string> strArr(3);
		strArr[0] = "Hello";
		strArr[1] = "World";
		strArr[2] = "!";
		for (int i = 0; i < strArr.size(); ++i)
			std::cout << strArr[i] << ' ';
		std::cout << "\n";

		std::cout << "=== CONST ACCESS ===" << std::endl;
		const Array<std::string> constStrArr = strArr;
		for (int i = 0; i < constStrArr.size(); ++i)
			std::cout << constStrArr[i] << ' ';
		std::cout << "\n";

		std::cout << "=== COPY & ASSIGNMENT ===" << std::endl;
		Array<std::string> copyArr;
		copyArr = strArr;
		copyArr[0] = "Goodbye";
		std::cout << "Original: " << strArr[0] << "\n";
		std::cout << "Copy: " << copyArr[0] << "\n";

		std::cout << "=== OUT OF BOUNDS ===" << std::endl;
		std::cout << intArr[999] << "\n"; // should throw

	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what();
	}
}
