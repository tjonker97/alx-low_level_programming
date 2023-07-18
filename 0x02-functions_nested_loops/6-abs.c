#include "main.h"
#include <stdio.h>
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
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", n);
	}
	return (0);
}
