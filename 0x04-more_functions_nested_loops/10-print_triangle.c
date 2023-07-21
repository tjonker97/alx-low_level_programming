#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a line
 *
 * @rows: Variable for the number of rows
 * @hash: Variable for the number of hashes
 * @size: Size of the triangle
 * Return: Void
 */

void print_triangle(int size)
{
	int rows, hash, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (spaces = size - rows; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
