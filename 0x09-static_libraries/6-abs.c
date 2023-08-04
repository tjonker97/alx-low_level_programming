#include "main.h"

/**
 * _abs - Prints the absolute value of an integer
 *
 * @n: The integer in decimal
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int i = n * -1;

		return (i);
	}
	else
	{
		return (n);
	}
}
