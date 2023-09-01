#include "main.h"
#include <stdio.h>

/**
 * print_binary - A function that prints the binary
 * representation of a number
 * @n: Variable for the number to print in binary
 * Return: Void(Nothing)
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
	{
		mask = n >> i;

		if (mask & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
		_putchar('0');
}
