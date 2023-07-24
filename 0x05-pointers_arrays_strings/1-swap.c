#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
