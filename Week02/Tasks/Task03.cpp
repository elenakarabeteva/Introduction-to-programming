#include <iostream>

int main() 
{
	double firstNumber, secondNumber;

	std::cout << "Enter first number value: ";
	std::cin >> firstNumber;
	std::cout << "Enter second number value: ";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber) 
    {
		std::cout << "Both numbers are equal." << std::endl;
		return 0;
	}

	std::cout << (firstNumber > secondNumber ? "The first number is larger than the second number." : "The second number is larger than the first number.") << std::endl;

	return 0;
}