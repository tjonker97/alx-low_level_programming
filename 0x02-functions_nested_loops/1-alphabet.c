#include "main.h"

/**
 * main - Entry Point
 * print_alphabet: 'Print lowercase alphabets'
 * Return: void
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
