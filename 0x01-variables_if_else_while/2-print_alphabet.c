#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print lowercase alphabets'
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 26)
	{
	putchar(letter);
	letter++;
	count++;
	}
	putchar('\n');
	return (0);
}

