#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description:  computes and prints the sum of all the multiples
 *  of 3 or 5 below 1024 (excluded).
 *  Return: 0
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
