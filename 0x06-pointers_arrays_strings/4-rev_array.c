#include "main.h"

/**
 * swap - a helper function that swaps the values of
 * two integers
 * @x: The first integer pointer
 * @y: the second integer pointer
 * Return: Void
 */

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Pointer to the start of the array
 * @n: Number of elements in the array
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		swap(&a[start], &a[end]);
		start++;
		end--;
	}
}
