#include "converter.hpp"

void charConvert (double digit)
{
	std::cout << "char: ";

	if (std::isnan(digit))
		std::cout << "impossible" << std::endl;
	else if (digit > 126 || digit < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(digit) << std::endl;
}

void intConvert (double digit)
{
	std::cout << "int: ";
	if (digit > INT_MAX || digit < INT_MIN || std::isnan(digit))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(digit) << std::endl;
}

void flaotConvert(double digit)
{
	std::cout << "float: ";
	if (floor(digit) == digit)
		std::cout << static_cast<float>(digit) << ".0" << "f" << std::endl;
	else
		std::cout << static_cast<float>(digit) << "f" << std::endl;
}

void doubleConvert(double digit)
{
	std::cout << "double: ";
	if (floor(digit) == digit)
		std::cout << digit << std::endl;
	else
		std::cout << digit << std::endl;
}

void convert(std::string thing)
{
	double digit;
	digit = std::stod(thing);
	charConvert(digit);
	intConvert(digit);
	flaotConvert(digit);
	doubleConvert(digit);
}

int main (int ac, char**ag)
{
	if (ac == 2)
		convert(ag[1]);
	else
		std::cout << "char: \nint: \nfloat: \ndouble: \n";
return(0);
}