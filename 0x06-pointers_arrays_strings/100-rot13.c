#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: Pointer to a string
 * Return: Pointer to str
 */

char *rot13(char *str)
{
	char *p = str;

	while (*p)
	{
		if (('a' <= *p && *p <= 'm') || ('A' <= *p && *p <= 'M'))
			*p += 13;
		else if (('n' <= *p && *p <= 'z') || ('N' <= *p && *p <= 'Z'))
			*p -= 13;
		p++;
	}
	return (str);
}
