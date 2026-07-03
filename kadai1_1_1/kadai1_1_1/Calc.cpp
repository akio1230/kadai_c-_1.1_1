#include "Calc.h"
#include <iostream>

int add(int a, int b)
{
	int result = a + b;
	std::cout << "a + b ‚ÌŒ‹‰Ê‚Í:" << result << std::endl;
	return result;
}

float add(float a, float b)
{
	float result = a + b;
	std::cout << "floatŒ^ a + b ‚ÌŒ‹‰Ê‚Í:" << result << std::endl;
	return result;
}

double add(double a, double b)
{
	double result = a + b;
	std::cout << "doubleŒ^ a + b ‚ÌŒ‹‰Ê‚Í:" << result << std::endl;
	return result;
}

int add(int a, int b, int c)
{
	int result = a + b + c;
	std::cout << "ˆø”3ŒÂ‚Ì a + b + c ‚ÌŒ‹‰Ê‚Í:" << result << std::endl;
	return result;
}