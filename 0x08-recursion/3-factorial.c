#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: Integer whose factorial is to be calculated
 * Return: 1 if n is zero
 * -1 if n is negative
 *  The factorial of n if n is positive
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
