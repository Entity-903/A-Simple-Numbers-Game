#include "calculations.h"

int Calculations::Addition(int v1, int v2)
{
	return v1 + v2;
}

int Calculations::Subtraction(int v1, int v2)
{
	// Never return a value less than 0
	return (v1 > v2) ? (v1 - v2) : (v2 - v1);
}

int Calculations::Multiply(int v1, int v2)
{
	return v1 * v2;
}

int Calculations::Modulus(int value, int divisor)
{

	return value % divisor;
}
