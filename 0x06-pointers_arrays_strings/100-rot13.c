#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: Pointer to a string
 * Return: Pointer to str
 */

char *rot13(char *str)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == rot13[i])
			{
				*str = ROT13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
