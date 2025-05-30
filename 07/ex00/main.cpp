#include "templates.hpp"

int main()
{
	int a = 2;
	int b = 5;

	std::cout << "The smallest value is: "<< min(a, b) << std::endl;
	std::cout << "The biggest value is: "<< max(a, b) << std::endl;
	swap(a, b);
	std::cout << "New A "<< a << std::endl;
	std::cout << "Mew B "<< b << std::endl;
}