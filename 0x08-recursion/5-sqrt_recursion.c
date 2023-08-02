#include "main.h"

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: integer whose square root is to
 * be calculated
 * @i: iteration
 * Return: The actual square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Integer whose square root is to be calculated
 * Return:  -1 if n does not have a square root
 * Square root of n otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}
