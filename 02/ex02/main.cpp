#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a(5.5f);
	Fixed b(2.25f);
	Fixed c(5.5f);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << "\n== Arithmetic ==" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;

	std::cout << "\n== Comparison ==" << std::endl;
	std::cout << "a == c: " << (a == c) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a <= c: " << (a <= c) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;

	std::cout << "\n== Increment / Decrement ==" << std::endl;
	Fixed x;
	std::cout << "x: " << x << std::endl;
	std::cout << "++x: " << ++x << std::endl;
	std::cout << "x++: " << x++ << std::endl;
	std::cout << "x after x++: " << x << std::endl;
	std::cout << "--x: " << --x << std::endl;
	std::cout << "x--: " << x-- << std::endl;
	std::cout << "x after x--: " << x << std::endl;

	std::cout << "\n== Min / Max ==" << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

	const Fixed d(3.3f);
	const Fixed e(7.7f);
	std::cout << "min(const d, const e): " << Fixed::min(d, e) << std::endl;
	std::cout << "max(const d, const e): " << Fixed::max(d, e) << std::endl;

	return 0;
}
