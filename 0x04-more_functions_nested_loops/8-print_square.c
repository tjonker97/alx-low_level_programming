#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: Input variable
 * Return: Void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\');

	for (i = 0; i < size; i++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
