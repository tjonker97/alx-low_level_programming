#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print lowercase alphabets except q and e'
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	int count = 0;

	while (count < 26)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
			letter++;
			count++;
		}
	}
	putchar('\n');
	return (0);
}
