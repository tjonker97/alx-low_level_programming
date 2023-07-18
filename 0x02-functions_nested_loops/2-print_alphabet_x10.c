#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char alphabet;
		
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');

		counter++;
	}
}
