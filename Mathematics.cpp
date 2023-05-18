#include <iostream>
#include <cmath>

#include "Mathematics.h"
 
void Mathematics::Basic::Add()
{
	

	std::cout << "What's the first number you want to add together?: ";
	std::cin >> a;

	std::cout << "What's the second number you want to add together?: ";
	std::cin >> b;

	result = a + b;

	std::cout << a << " + " << b << " equals " << result << std::endl;
}

void Mathematics::Basic::Subtract()
{
	std::cout << "What's the first number you want to subtract?: ";
	std::cin >> a;

	std::cout << "What's the second number you want to subtract?: ";
	std::cin >> b;

	result = a - b;

	std::cout << a << " - " << b << " equals " << result << std::endl;
}

void Mathematics::Basic::Multiply()
{
	std::cout << "What's the first number you want to multiply?: ";
	std::cin >> a;

	std::cout << "What's the second number you want to multiply?: ";
	std::cin >> b;

	result = a * b;

	std::cout << a << " * " << b << " equals " << result << std::endl;
}

void Mathematics::Basic::Divide()
{
	std::cout << "What's the first number you want to divide?: ";
	std::cin >> a;

	std::cout << "What's the second number you want to divide?: ";
	std::cin >> b;

	result = a / b;

	std::cout << a << " / " << b << " equals " << result << std::endl;
}

void Mathematics::Advanced::sqr()
{
	std::cout << "What number do you wanna know the square root of?: ";
	std::cin >> a;

	result = sqrt(a);

	std::cout << "The square root of " << a << " is " << result << std::endl;
}

void Mathematics::Advanced::numDiB1()
{
	std::cout << "What number would you like divided by 1?: ";
	std::cin >> a;

	result = 1 / a;

	std::cout << a << " divided by 1 is " << result << std::endl;
}
